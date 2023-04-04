/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>
#include "Driver.h"

void delay(){
for(uint32_t i = 0; i < 400000; i++);
}


int main(void)
{
//Enables clock for GPIOD
GPIOD_PCLK_EN;
//Configure PA0-PD3 for Output
GPIOD_PIN0_OUT;
GPIOD_PIN1_OUT;
GPIOD_PIN2_OUT;
GPIOD_PIN3_OUT;
//Configure P8-P11 for input
GPIOD_PIN8_IN;
GPIOD_PIN9_IN;
GPIOD_PIN10_IN;
GPIOD_PIN11_IN;
//Configure pull up resistors for D pins 8-11
GPIOD_PIN8_PU;
GPIOD_PIN9_PU;
GPIOD_PIN10_PU;
GPIOD_PIN11_PU;


while(1){

	GPIOD->ODR |= (0xf);
	GPIOD->ODR &= ~(0x1 << 0);

	if(!(GPIOD->IDR & (1 << 8))){
		delay();
		printf("1\n");
	}if(!(GPIOD->IDR & (0x1 << 9))){
		delay();
		printf("2\n");
	}if(!(GPIOD->IDR & (0x1 << 10))){
		delay();
		printf("3\n");
	}if (!(GPIOD->IDR & (0x1 << 11))){
		delay();
		printf("A\n");
	}

	GPIOD->ODR |= (0xf);
	GPIOD->ODR &= ~(0x1 << 1);

	if(!(GPIOD->IDR & (1 << 8))){
			delay();
			printf("4\n");
		} if(!(GPIOD->IDR & (1 << 9))){
			delay();
			printf("5\n");
		} if(!(GPIOD->IDR & (01 << 10))){
			delay();
			printf("6\n");
		} if (!(GPIOD->IDR & (0x1 << 11))){
			delay();
			printf("B\n");
		}

	GPIOD->ODR |= (0xf);
	GPIOD->ODR &= ~(0x1 << 2);


	if(!(GPIOD->IDR & (1 << 8))){
			delay();
			printf("7\n");
		} if(!(GPIOD->IDR & (0x1 << 9))){
			delay();
			printf("8\n");
		} if(!(GPIOD->IDR & (0x1 << 10))){
			delay();
			printf("9\n");
		} if (!(GPIOD->IDR & (0x1 << 11))){
			delay();
			printf("C\n");
		}

	GPIOD->ODR |= (0xf);
	GPIOD->ODR &= ~(0x1 << 3);

	if(!(GPIOD->IDR & (1 << 8))){
				delay();
				printf("*\n");
			} if(!(GPIOD->IDR & (0x1 << 9))){
				delay();
				printf("0\n");
			} if(!(GPIOD->IDR & (0x1 << 10))){
				delay();
				printf("#\n");
			} if (!(GPIOD->IDR & (0x1 << 11))){
				delay();
				printf("D\n");
			}


}




}
