#include "stm32f4xx.h"
#include "led.h"
#include "key.h"

int main(void)
{
    
//	init_led();
//    while(1)
//    {
//    //使灯亮 
//    GPIO_ResetBits(GPIOF,GPIO_Pin_9|GPIO_Pin_10);
//    }
 

    init_led();
    init_key();
   
    while(1)
	{
        //如果按键按下为低电平，则灯亮
		if(GPIO_ReadInputDataBit(GPIOE,GPIO_Pin_3)==0)
		{
			GPIO_ResetBits(GPIOA,GPIO_Pin_9 | GPIO_Pin_10);
		}
        //如果按键按下为高电平，则灯灭
		if(GPIO_ReadInputDataBit(GPIOE,GPIO_Pin_3)==1)
		{
			GPIO_SetBits(GPIOA,GPIO_Pin_9 | GPIO_Pin_10);
		}
	}
     
}




	


