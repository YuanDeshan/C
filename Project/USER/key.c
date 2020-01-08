#include "key.h"

//按键初始化函数
void init_key(void)
{
    //GPIO_InitTypeDef为端口初始化结构体
    //在此定义一个结构体变量GPIO_InitStruct
    GPIO_InitTypeDef GPIO_InitStruct;
    
    //打开或关闭对应外设输出时钟端口
    RCC_APB1PeriphClockCmd(RCC_AHB1Periph_GPIOE,ENABLE);
    
    GPIO_InitStruct.GPIO_Pin=GPIO_Pin_3|GPIO_Pin_4;//PE3 PE4端口
    GPIO_InitStruct.GPIO_Mode=GPIO_Mode_IN;//输入模式
    GPIO_InitStruct.GPIO_Speed=GPIO_Speed_50MHz;//速度 50MHz
    GPIO_InitStruct.GPIO_OType=GPIO_OType_PP;//推挽
    GPIO_InitStruct.GPIO_PuPd=GPIO_PuPd_UP;//上拉
    
	//端口初始化
    GPIO_Init(GPIOE,&GPIO_InitStruct);
    
}

