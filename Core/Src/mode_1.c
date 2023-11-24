/*
 * mode_1.c
 *
 *  Created on: Nov 12, 2023
 *      Author: Admin
 */

#include "display7SEG.h"
#include "main.h"
#include "software_timer.h"
#include "global.h"

void SwitchMode2()
{
	HAL_GPIO_WritePin(GPIOA, R_LED_1_Pin | R_LED_2_Pin, RESET);

	status = MODE2;

	counter_led1 = 20;
	counter_led2 = 0;

	setTimer1(1000);
	setTimer2(20000);
	setTimer3(250);    //set RED Led blinky 2Hz
}

void mode_1()
{
	switch (status)
	{
		case INIT:
			status = RED_GREEN;

			counter_led1 = 50;
			counter_led2 = 46;

			setTimer1(1000);
			setTimer2(47000);

			break;

		case RED_GREEN:
			HAL_GPIO_WritePin(GPIOA, Y_LED_1_Pin | G_LED_1_Pin | R_LED_2_Pin | Y_LED_2_Pin, RESET);
			HAL_GPIO_WritePin(GPIOA, R_LED_1_Pin | G_LED_2_Pin, SET);

			display7SEG1(counter_led1);
			display7SEG2(counter_led2);

			if (timer1_flag == 1)
			{
				setTimer1(1000);

				counter_led1--;
				counter_led2--;
			}

			if (timer2_flag == 1)
			{
				status = RED_YELLOW;

				counter_led2 = 3;

				setTimer1(1000);
				setTimer2(4000);
			}

			if(is_button_pressed(0)) SwitchMode2();

			break;

		case RED_YELLOW:
			HAL_GPIO_WritePin(GPIOA, Y_LED_1_Pin | G_LED_1_Pin | R_LED_2_Pin | G_LED_2_Pin, RESET);
			HAL_GPIO_WritePin(GPIOA, R_LED_1_Pin | Y_LED_2_Pin, SET);

			display7SEG1(counter_led1);
			display7SEG2(counter_led2);

			if (timer1_flag == 1)
			{
				setTimer1(1000);

				counter_led1--;
				counter_led2--;
			}

			if (timer2_flag == 1)
			{
				status = GREEN_RED;

				counter_led1 = 46;
				counter_led2 = 50;

				setTimer1(1000);
				setTimer2(47000);
			}

			if(is_button_pressed(0)) SwitchMode2();

			break;

		case GREEN_RED:
			HAL_GPIO_WritePin(GPIOA, R_LED_1_Pin | Y_LED_1_Pin | Y_LED_2_Pin |G_LED_2_Pin, RESET);
			HAL_GPIO_WritePin(GPIOA, G_LED_1_Pin | R_LED_2_Pin, SET);

			display7SEG1(counter_led1);
			display7SEG2(counter_led2);

			if (timer1_flag == 1)
			{
				setTimer1(1000);

				counter_led1--;
				counter_led2--;
			}

			if (timer2_flag == 1)
			{
				status = YELLOW_RED;

				counter_led1 = 3;

				setTimer1(1000);
				setTimer2(4000);
			}

			if(is_button_pressed(0)) SwitchMode2();

			break;

		case YELLOW_RED:
			HAL_GPIO_WritePin(GPIOA, R_LED_1_Pin | G_LED_1_Pin | Y_LED_2_Pin | G_LED_2_Pin, RESET);
			HAL_GPIO_WritePin(GPIOA, Y_LED_1_Pin | R_LED_2_Pin, SET);

			display7SEG1(counter_led1);
			display7SEG2(counter_led2);

			if (timer1_flag == 1)
			{
				setTimer1(1000);

				counter_led1--;
				counter_led2--;
			}

			if (timer2_flag == 1)
			{
				status = RED_GREEN;

				counter_led1 = 50;
				counter_led2 = 46;

				setTimer1(1000);
				setTimer2(47000);
			}

			if(is_button_pressed(0)) SwitchMode2();

			break;

		default:
			break;
	}
}

