/*
 * add_time_button.c
 *
 *  Created on: Nov 12, 2023
 *      Author: Admin
 */

#include "add_time_button.h"
#include "input_reading.h"
#include "global.h"
#include "software_timer.h"

void check_button_add_time()
{
	if(is_button_pressed(1) || is_button_pressed_1s(1))
	{
		counter_led2++;
	}

	if(is_button_pressed(2))
	{
		if (counter_led2 <= 99)
		{
			counter_led1 = counter_led2;
			setTimer2(counter_led2 * 1000);
			counter_led2 = 0;
		}
	}
}
