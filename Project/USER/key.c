#include "key.h"

//������ʼ������
void init_key(void)
{
    //GPIO_InitTypeDefΪ�˿ڳ�ʼ���ṹ��
    //�ڴ˶���һ���ṹ�����GPIO_InitStruct
    GPIO_InitTypeDef GPIO_InitStruct;
    
    //�򿪻�رն�Ӧ�������ʱ�Ӷ˿�
    RCC_APB1PeriphClockCmd(RCC_AHB1Periph_GPIOE,ENABLE);
    
    GPIO_InitStruct.GPIO_Pin=GPIO_Pin_3|GPIO_Pin_4;//PE3 PE4�˿�
    GPIO_InitStruct.GPIO_Mode=GPIO_Mode_IN;//����ģʽ
    GPIO_InitStruct.GPIO_Speed=GPIO_Speed_50MHz;//�ٶ� 50MHz
    GPIO_InitStruct.GPIO_OType=GPIO_OType_PP;//����
    GPIO_InitStruct.GPIO_PuPd=GPIO_PuPd_UP;//����
    
	//�˿ڳ�ʼ��
    GPIO_Init(GPIOE,&GPIO_InitStruct);
    
}

