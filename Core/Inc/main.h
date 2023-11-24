/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define R_LED_1_Pin GPIO_PIN_2
#define R_LED_1_GPIO_Port GPIOA
#define Y_LED_1_Pin GPIO_PIN_3
#define Y_LED_1_GPIO_Port GPIOA
#define G_LED_1_Pin GPIO_PIN_4
#define G_LED_1_GPIO_Port GPIOA
#define R_LED_2_Pin GPIO_PIN_5
#define R_LED_2_GPIO_Port GPIOA
#define Y_LED_2_Pin GPIO_PIN_6
#define Y_LED_2_GPIO_Port GPIOA
#define G_LED_2_Pin GPIO_PIN_7
#define G_LED_2_GPIO_Port GPIOA
#define A1_Pin GPIO_PIN_0
#define A1_GPIO_Port GPIOB
#define A2_Pin GPIO_PIN_1
#define A2_GPIO_Port GPIOB
#define A3_Pin GPIO_PIN_2
#define A3_GPIO_Port GPIOB
#define C3_Pin GPIO_PIN_10
#define C3_GPIO_Port GPIOB
#define C4_Pin GPIO_PIN_11
#define C4_GPIO_Port GPIOB
#define D1_Pin GPIO_PIN_12
#define D1_GPIO_Port GPIOB
#define D2_Pin GPIO_PIN_13
#define D2_GPIO_Port GPIOB
#define D3_Pin GPIO_PIN_14
#define D3_GPIO_Port GPIOB
#define D4_Pin GPIO_PIN_15
#define D4_GPIO_Port GPIOB
#define BTN3_Pin GPIO_PIN_10
#define BTN3_GPIO_Port GPIOA
#define BTN2_Pin GPIO_PIN_11
#define BTN2_GPIO_Port GPIOA
#define BTN1_Pin GPIO_PIN_12
#define BTN1_GPIO_Port GPIOA
#define A4_Pin GPIO_PIN_3
#define A4_GPIO_Port GPIOB
#define B1_Pin GPIO_PIN_4
#define B1_GPIO_Port GPIOB
#define B2_Pin GPIO_PIN_5
#define B2_GPIO_Port GPIOB
#define B3_Pin GPIO_PIN_6
#define B3_GPIO_Port GPIOB
#define B4_Pin GPIO_PIN_7
#define B4_GPIO_Port GPIOB
#define C1_Pin GPIO_PIN_8
#define C1_GPIO_Port GPIOB
#define C2_Pin GPIO_PIN_9
#define C2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
