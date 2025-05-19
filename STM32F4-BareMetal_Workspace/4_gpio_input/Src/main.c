#include "stm32f4xx.h"

#define GPIOAEN						(1U<<0)
#define GPIOCEN						(1U<<2)

#define PIN5						(1U<<5)
#define PIN13						(1U<<13)

int main(){

	RCC->AHB1ENR |= GPIOAEN;
	RCC->AHB1ENR |= GPIOCEN;

	//set PA5 as output
	GPIOA->MODER |= (1U<<10);
	GPIOA->MODER &=~(1U<<11);

	//set PC13 as input
	GPIOC->IDR &=~(1U<<26);
	GPIOC->IDR &=~(1U<<27);

	while(1){

		//check if the button is pressed
		if(GPIOC->IDR & PIN13){
			GPIOA->BSRR = (1U<<21);
		}
		else{
			GPIOA->BSRR = PIN5;
		}
	}
}
