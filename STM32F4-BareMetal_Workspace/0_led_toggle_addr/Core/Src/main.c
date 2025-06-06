#define PERIPH_BASE						(0x40000000UL)
#define AHB1PERIPH_OFFSET				(0x00020000UL)
#define AHB1PERIPH_BASE					(AHB1PERIPH_OFFSET + PERIPH_BASE)

#define GPIOA_OFFSET					(0x0000UL)
#define GPIOA_BASE						(GPIOA_OFFSET + AHB1PERIPH_BASE)

#define RCC_OFFSET 						(0x3800UL)
#define RCC_BASE						(AHB1PERIPH_BASE + RCC_OFFSET)

#define AHB1EN_R_OFFSET					(0x30UL)
#define RCC_AHB1EN_R					(*(volatile unsigned int *)(AHB1EN_R_OFFSET + RCC_BASE))

#define MODE_R_OFFSET					(0x00UL)
#define GPIOA_MODE_R					(*(volatile unsigned int *)(GPIOA_BASE + MODE_R_OFFSET))

#define OD_R_OFFSET						(0x14UL)
#define GPIOA_OD_R						(*(volatile unsigned int *)(GPIOA_BASE + OD_R_OFFSET))

#define GPIOAEN							(1U<<0)
#define PIN5							(1U<<5)

int main(){
	RCC_AHB1EN_R |= GPIOAEN; //enable clock access to GPIOA

	GPIOA_MODE_R |= (1U<<10);	//set bit 10 to 1
	GPIOA_MODE_R &=~(1U<<11);	//set bit 11 to 0

	while(1){
		GPIOA_OD_R ^= PIN5;
		for(int i=0;i<1000000;i++){}
	}



}
