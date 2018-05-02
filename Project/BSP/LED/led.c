#include"led.h"
#include"sys.h"
void LED_Init(void)
{
	GPIO_InitTypeDef GPIO_InitLED;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD|RCC_APB2Periph_GPIOE,ENABLE);
	GPIO_InitLED.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitLED.GPIO_Pin=GPIO_Pin_1;
	GPIO_InitLED.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOD,&GPIO_InitLED);
	GPIO_SetBits(GPIOD,GPIO_Pin_1);

	GPIO_InitLED.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitLED.GPIO_Pin=GPIO_Pin_5;
	GPIO_InitLED.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOE,&GPIO_InitLED);
	GPIO_SetBits(GPIOE,GPIO_Pin_5);

}


