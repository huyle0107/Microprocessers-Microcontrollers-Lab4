/*
 * display7SEG.c
 *
 *  Created on: Nov 12, 2023
 *      Author: Admin
 */

#include "main.h"
#include "display7SEG.h"

uint8_t segment7display[10] = {
		0x00,  // 0 --> 0000
		0x01,  // 1 --> 0001
		0x02,  // 2 --> 0010
		0x03,  // 3 --> 0011
		0x04,  // 4 --> 0100
		0x05,  // 5 --> 0101
		0x06,  // 6 --> 0110
		0x07,  // 7 --> 0111
		0x08,  // 8 --> 1000
		0x09,  // 9 --> 1001
};

void display7SEG1(int counter) //25
{
	uint8_t number1 = segment7display[counter/10];
	uint8_t number2 = segment7display[counter%10];

	HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, number1 & 1);
	HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, number1 & 2);
	HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, number1 & 4);
	HAL_GPIO_WritePin(A4_GPIO_Port, A4_Pin, number1 & 8);

	HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, number2 & 1);
	HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, number2 & 2);
	HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, number2 & 4);
	HAL_GPIO_WritePin(B4_GPIO_Port, B4_Pin, number2 & 8);

}

void display7SEG2(int counter)
{
	uint8_t number1 = segment7display[counter/10];
	uint8_t number2 = segment7display[counter%10];

	HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, number1 & 1);
	HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, number1 & 2);
	HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, number1 & 4);
	HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, number1 & 8);

	HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, number2 & 1);
	HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, number2 & 2);
	HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, number2 & 4);
	HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, number2 & 8);
}
