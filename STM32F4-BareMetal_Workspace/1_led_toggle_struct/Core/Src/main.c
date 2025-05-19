#include <stdint.h>

#define PERIPH_BASE						(0x40000000UL)
#define AHB1PERIPH_OFFSET				(0x00020000UL)
#define AHB1PERIPH_BASE					(AHB1PERIPH_OFFSET + PERIPH_BASE)

#define GPIOA_OFFSET					(0x0000UL)
#define GPIOA_BASE						(GPIOA_OFFSET + AHB1PERIPH_BASE)

#define RCC_OFFSET 						(0x3800UL)
#define RCC_BASE						(AHB1PERIPH_BASE + RCC_OFFSET)


#define GPIOAEN							(1U<<0)
#define PIN5							(1U<<5)

#define __IO volatile

typedef struct
{
	volatile uint32_t DUMMY[12];
	volatile uint32_t AHB1ENR;
}RCC_TypeDef;

typedef struct
{
	volatile uint32_t MODER;
	volatile uint32_t DUMMY[4];
	volatile uint32_t ODR;
}GPIO_TypeDef;

#define RCC								((RCC_TypeDef *) RCC_BASE)
#define GPIOA							((GPIO_TypeDef *) GPIOA_BASE)

int main(){
	//RCC_AHB1EN_R |= GPIOAEN; //enable clock access to GPIOA
	RCC->AHB1ENR |= GPIOAEN;

	//GPIOA_MODE_R |= (1U<<10);	//set bit 10 to 1
	//GPIOA_MODE_R &=~(1U<<11);	//set bit 11 to 0
	GPIOA->MODER |= (1U<<10);
	GPIOA->MODER &=~(1U<<11);

	while(1){
		//GPIOA_OD_R ^= PIN5;
		GPIOA->ODR ^= PIN5;
		for(int i=0;i<1000000;i++){}
	}



}
