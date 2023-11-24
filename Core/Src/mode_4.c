/*
 * mode_.c
 *
 *  Created on: Nov 12, 2023
 *      Author: Admin
 */

#include "main.h"
#include "software_timer.h"
#include "input_reading.h"
#include "global.h"
#include "add_time_button.h"

void mode_4()
{
	if(status == MODE4)
	{
		display7SEG1(counter_led1);
		display7SEG2(4);

		//Blinky RED Led in 2Hz
		if(timer3_flag == 1)
		{
			//blinky all RED Led
			HAL_GPIO_TogglePin(G_LED_1_GPIO_Port, G_LED_1_Pin);
			HAL_GPIO_TogglePin(G_LED_2_GPIO_Port, G_LED_2_Pin);

			HAL_GPIO_WritePin(GPIOA, R_LED_1_Pin | Y_LED_1_Pin | R_LED_2_Pin | Y_LED_2_Pin, RESET);

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
			status = INIT;
		}

		//check whether user increases time or not.
		check_button_add_time();
	}
}
