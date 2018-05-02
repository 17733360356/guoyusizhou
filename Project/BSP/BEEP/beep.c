#include "stm32f10x.h"
#include "beep.h"
#include "sys.h"
void BEEP_Init(void)
{

	GPIO_InitTypeDef GPIO_InitBEEP;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	GPIO_InitBEEP.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitBEEP.GPIO_Pin=GPIO_Pin_8;
	GPIO_InitBEEP.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_InitBEEP);
	GPIO_ResetBits(GPIOB,GPIO_Pin_8);



}

