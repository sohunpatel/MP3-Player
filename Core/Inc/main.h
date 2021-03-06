/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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
#include "stm32f4xx_hal.h"

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
#define BT_CTS_Pin GPIO_PIN_0
#define BT_CTS_GPIO_Port GPIOA
#define BT_RTS_Pin GPIO_PIN_1
#define BT_RTS_GPIO_Port GPIOA
#define BT_TX_Pin GPIO_PIN_2
#define BT_TX_GPIO_Port GPIOA
#define BT_RX_Pin GPIO_PIN_3
#define BT_RX_GPIO_Port GPIOA
#define uSD_SCLK_Pin GPIO_PIN_5
#define uSD_SCLK_GPIO_Port GPIOA
#define uSD_MISO_Pin GPIO_PIN_6
#define uSD_MISO_GPIO_Port GPIOA
#define uSD_MOSI_Pin GPIO_PIN_7
#define uSD_MOSI_GPIO_Port GPIOA
#define FORWARD_Pin GPIO_PIN_12
#define FORWARD_GPIO_Port GPIOB
#define PAUSE_PLAY_Pin GPIO_PIN_13
#define PAUSE_PLAY_GPIO_Port GPIOB
#define BACK_Pin GPIO_PIN_14
#define BACK_GPIO_Port GPIOB
#define AUDIO_CODEC_SCL_Pin GPIO_PIN_6
#define AUDIO_CODEC_SCL_GPIO_Port GPIOB
#define AUDIO_CODEC_SDA_Pin GPIO_PIN_7
#define AUDIO_CODEC_SDA_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
