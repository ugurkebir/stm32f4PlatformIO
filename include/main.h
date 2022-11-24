#ifndef MAIN_H
#define MAIN_H

#include "stm32f4xx_hal.h"

#define LED_PIN_ORANGE                         GPIO_PIN_13
#define LED_PIN_RED                            GPIO_PIN_14
#define LED_GPIO_PORT                          GPIOD
#define LED_GPIO_CLK_ENABLE()                  __HAL_RCC_GPIOD_CLK_ENABLE()

#endif // MAIN_H