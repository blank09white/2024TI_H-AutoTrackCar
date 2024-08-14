#include "stm32f10x.h"
//
void PwmInit01(uint16_t arr,uint16_t psc){
    
    //open main clock
   
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2,ENABLE);    
    GPIO_PinRemapConfig(GPIO_FullRemap_TIM2, ENABLE);
    
    //output to use afio
    GPIO_InitTypeDef PWMInitStruct;
    PWMInitStruct.GPIO_Pin = GPIO_Pin_10 | GPIO_Pin_11;       //you choose to use port(the paremeter can be A~C)
    PWMInitStruct.GPIO_Mode = GPIO_Mode_AF_PP;
    PWMInitStruct.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB,&PWMInitStruct);
    //time init
    TIM_TimeBaseInitTypeDef TIM_PWMStruct;
    TIM_PWMStruct.TIM_Period = arr;            //this paremeter is Reso 
    TIM_PWMStruct.TIM_Prescaler = psc;         //this paremeter can be use to setting Freq
    TIM_PWMStruct.TIM_CounterMode = TIM_CounterMode_Up;
    TIM_TimeBaseInit(TIM2,&TIM_PWMStruct);
    //oc init and choose channel
    TIM_OCInitTypeDef OC_PWMStruct;
    TIM_OCStructInit(&OC_PWMStruct);
    OC_PWMStruct.TIM_OCMode = TIM_OCMode_PWM1;
    OC_PWMStruct.TIM_OutputState = TIM_OutputState_Enable;
    OC_PWMStruct.TIM_Pulse = 0;
    OC_PWMStruct.TIM_OCPolarity = TIM_OCPolarity_High;
    
    //oc2 init and choose channel
    TIM_OCInitTypeDef OC_PWMStruct02;
    TIM_OCStructInit(&OC_PWMStruct02);
    OC_PWMStruct02.TIM_OCMode = TIM_OCMode_PWM1;
    OC_PWMStruct02.TIM_OutputState = TIM_OutputState_Enable;
    OC_PWMStruct02.TIM_Pulse = 0;
    OC_PWMStruct02.TIM_OCPolarity = TIM_OCPolarity_High;
    //channel
    TIM_OC3Init(TIM2,&OC_PWMStruct);
    TIM_OC4Init(TIM2,&OC_PWMStruct02);
    //open pwm clock
    TIM_OC3PreloadConfig(TIM2,TIM_OCPreload_Enable);
    TIM_OC4PreloadConfig(TIM2,TIM_OCPreload_Enable);
    //manden 
    TIM_Cmd(TIM2,ENABLE);
    
}

void PWM_SetCompareTIM2_3(uint16_t Compare){
    
    TIM_SetCompare3(TIM2,Compare);
}

void PWM_SetCompareTIM2_4(uint16_t Compare){
    
    TIM_SetCompare4(TIM2,Compare);
}


void PwmInit02(uint16_t arr,uint16_t psc){
    
    //open main clock
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3,ENABLE);
    GPIO_PinRemapConfig(GPIO_FullRemap_TIM3, ENABLE);
    //output to use afio
    GPIO_InitTypeDef PWMInitStruct;
    PWMInitStruct.GPIO_Pin = GPIO_Pin_8 | GPIO_Pin_9;       //you choose to use port(the paremeter can be A~C)
    PWMInitStruct.GPIO_Mode = GPIO_Mode_AF_PP;
    PWMInitStruct.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOC,&PWMInitStruct);
    //time init
    TIM_TimeBaseInitTypeDef TIM_PWMStruct;
    TIM_PWMStruct.TIM_Period = arr;            //this paremeter is Reso 
    TIM_PWMStruct.TIM_Prescaler = psc;         //this paremeter can be use to setting Freq
    TIM_PWMStruct.TIM_CounterMode = TIM_CounterMode_Up;
    TIM_TimeBaseInit(TIM3,&TIM_PWMStruct);
    //oc init and choose channel
    TIM_OCInitTypeDef OC_PWMStruct;
    TIM_OCStructInit(&OC_PWMStruct);
    OC_PWMStruct.TIM_OCMode = TIM_OCMode_PWM1;
    OC_PWMStruct.TIM_OutputState = TIM_OutputState_Enable;
    OC_PWMStruct.TIM_Pulse = 0;
    OC_PWMStruct.TIM_OCPolarity = TIM_OCPolarity_High;
    
    //oc2 init and choose channel
    TIM_OCInitTypeDef OC_PWMStruct02;
    TIM_OCStructInit(&OC_PWMStruct02);
    OC_PWMStruct02.TIM_OCMode = TIM_OCMode_PWM1;
    OC_PWMStruct02.TIM_OutputState = TIM_OutputState_Enable;
    OC_PWMStruct02.TIM_Pulse = 0;
    OC_PWMStruct02.TIM_OCPolarity = TIM_OCPolarity_High;
    //channel
    TIM_OC3Init(TIM3,&OC_PWMStruct);
    TIM_OC4Init(TIM3,&OC_PWMStruct02);
    //open pwm clock
    TIM_OC3PreloadConfig(TIM3,TIM_OCPreload_Enable);
    TIM_OC4PreloadConfig(TIM3,TIM_OCPreload_Enable);
    //manden 
    TIM_Cmd(TIM3,ENABLE);
    
}

void PWM_SetCompareTIM3_3(uint16_t Compare){
    
    TIM_SetCompare3(TIM3,Compare);
}

void PWM_SetCompareTIM3_4(uint16_t Compare){
    
    TIM_SetCompare4(TIM3,Compare);
}