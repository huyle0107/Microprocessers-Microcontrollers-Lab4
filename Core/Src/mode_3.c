/*
 * mode_3.c
 *
 *  Created on: Nov 12, 2023
 *      Author: Admin
 */

#include "main.h"
#include "software_timer.h"
#include "input_reading.h"
#include "global.h"
#include "add_time_button.h"

void mode_3()
{
	if(status == MODE3)
	{
		display7SEG1(counter_led1);
		display7SEG2(3);

		//Blinky RED Led in 2Hz
		if(timer3_flag == 1)
		{
			//blinky all RED Led
			HAL_GPIO_TogglePin(Y_LED_1_GPIO_Port, Y_LED_1_Pin);
			HAL_GPIO_TogglePin(Y_LED_2_GPIO_Port, Y_LED_2_Pin);

			HAL_GPIO_WritePin(GPIOA, R_LED_1_Pin | G_LED_1_Pin | R_LED_2_Pin | G_LED_2_Pin, RESET);

			setTimer3(250);
		}

		if(timer1_flag == 1)
		{
			counter_led1--;
			setTimer1(1000);
		}

		//Switch to M3 mode
		if(is_button_pressed(0) || timer2_flag == 1)
		{
			status = MODE4;

			counter_led1 = 20;
			counter_led2 = 0;

			setTimer1(1000);
			setTimer2(20000);
			setTimer3(250);		//set RED Led blinky 2Hz
		}

		//check whether user increases time or not.
		check_button_add_time();
	}
}
