#include "led.h"

//led��ʼ������
void init_led(void)
{
    //GPIO_InitTypeDefΪ�˿ڳ�ʼ���ṹ��
    //�ڴ˶���һ���ṹ�����GPIO_InitStruct
    GPIO_InitTypeDef GPIO_InitStruct;
    
    //�򿪻�رն�Ӧ�������ʱ�Ӷ˿�
    RCC_APB1PeriphClockCmd(RCC_AHB1Periph_GPIOF,ENABLE);
    
    GPIO_InitStruct.GPIO_Pin=GPIO_Pin_9|GPIO_Pin_10;//PA6 PA7�˿�
    GPIO_InitStruct.GPIO_Mode=GPIO_Mode_OUT;//���ģʽ
    GPIO_InitStruct.GPIO_Speed=GPIO_Speed_50MHz;//�ٶ� 50MHz
    GPIO_InitStruct.GPIO_OType=GPIO_OType_PP;//����
    GPIO_InitStruct.GPIO_PuPd=GPIO_PuPd_UP;//����
    
	//�˿ڳ�ʼ��
    GPIO_Init(GPIOF,&GPIO_InitStruct);
    
    //ʹ����  Setbits��1  
    GPIO_SetBits(GPIOF,GPIO_Pin_9|GPIO_Pin_10);
}

