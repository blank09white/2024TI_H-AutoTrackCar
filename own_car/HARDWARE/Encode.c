#include "stm32f10x.h"

void EncodeInit(void){
    //open main clock
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB | RCC_APB2Periph_GPIOA,ENABLE);
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM1,ENABLE);
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2,ENABLE);
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3,ENABLE);
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM4,ENABLE);
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO,ENABLE);
  
    GPIO_PinRemapConfig(GPIO_FullRemap_TIM2, ENABLE);
     //TIM1_1~2
    //GPIO init
    GPIO_InitTypeDef GPIO_InitStructure_1;
	GPIO_InitStructure_1.GPIO_Pin = GPIO_Pin_13 | GPIO_Pin_14;
	GPIO_InitStructure_1.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure_1.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_Init(GPIOB,&GPIO_InitStructure_1);
    //time init
    TIM_TimeBaseInitTypeDef TIM_PWMStruct_1;
    TIM_PWMStruct_1.TIM_Period = 65536 - 1;            //this paremeter is Reso 
    TIM_PWMStruct_1.TIM_Prescaler = 1 - 1;         //this paremeter can be use to setting Freq
    TIM_PWMStruct_1.TIM_CounterMode = TIM_CounterMode_Up;
    TIM_TimeBaseInit(TIM1,&TIM_PWMStruct_1);   
    //ICStructInit
    //T1andT2 counter
    TIM_ICInitTypeDef TIM_ICInitStructure;
    TIM_ICStructInit(&TIM_ICInitStructure);
    TIM_ICInitStructure.TIM_Channel = TIM_Channel_1;
    TIM_ICInitStructure.TIM_ICFilter = 0xF;
    TIM_ICInit(TIM1,&TIM_ICInitStructure);
    TIM_ICInitStructure.TIM_Channel = TIM_Channel_2;                                
	TIM_Cmd(TIM1,ENABLE);    
    TIM_ICInitStructure.TIM_ICFilter = 0xF;
    TIM_ICInit(TIM1,&TIM_ICInitStructure);
    //ENCODEconfig
    TIM_EncoderInterfaceConfig(TIM1,TIM_EncoderMode_TI12,TIM_ICPolarity_Rising,TIM_ICPolarity_Rising );
    
    TIM_Cmd(TIM1,ENABLE);
    //TIM2_1~2
    //GPIO Init
    GPIO_InitTypeDef GPIO_InitStructure_2;
	GPIO_InitStructure_2.GPIO_Pin = GPIO_Pin_15;
	GPIO_InitStructure_2.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure_2.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_Init(GPIOA,&GPIO_InitStructure_2);
    
    GPIO_InitTypeDef GPIO_InitStructure_2_;
	GPIO_InitStructure_2_.GPIO_Pin = GPIO_Pin_3;
	GPIO_InitStructure_2_.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure_2_.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_Init(GPIOB,&GPIO_InitStructure_2_);
    //time init
    TIM_TimeBaseInitTypeDef TIM_PWMStruct_2;
    TIM_PWMStruct_2.TIM_Period = 65536 - 1;            //this paremeter is Reso 
    TIM_PWMStruct_2.TIM_Prescaler = 1 - 1;         //this paremeter can be use to setting Freq
    TIM_PWMStruct_2.TIM_CounterMode = TIM_CounterMode_Up;
    TIM_TimeBaseInit(TIM2,&TIM_PWMStruct_2);   
    //ICStructInit
    //T1andT2 counter
    TIM_ICInitTypeDef TIM_ICInitStructure_2;
    TIM_ICStructInit(&TIM_ICInitStructure_2);
    TIM_ICInitStructure_2.TIM_Channel = TIM_Channel_1;
    TIM_ICInitStructure_2.TIM_ICFilter = 0xF;
    TIM_ICInit(TIM2,&TIM_ICInitStructure_2);
    TIM_ICInitStructure_2.TIM_Channel = TIM_Channel_2;                                
	TIM_Cmd(TIM2,ENABLE);    
    TIM_ICInitStructure_2.TIM_ICFilter = 0xF;
    TIM_ICInit(TIM2,&TIM_ICInitStructure_2);
    //ENCODEconfig
    TIM_EncoderInterfaceConfig(TIM2,TIM_EncoderMode_TI12,TIM_ICPolarity_Rising,TIM_ICPolarity_Rising );
    
    TIM_Cmd(TIM2,ENABLE);
    //TIM3_1~2
    //GPIO_Init
    GPIO_InitTypeDef GPIO_InitStructure_3;
	GPIO_InitStructure_3.GPIO_Pin = GPIO_Pin_6 | GPIO_Pin_7;
	GPIO_InitStructure_3.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure_3.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_Init(GPIOA,&GPIO_InitStructure_3);
     //time init
    TIM_TimeBaseInitTypeDef TIM_PWMStruct_3;
    TIM_PWMStruct_3.TIM_Period = 65536 - 1;            //this paremeter is Reso 
    TIM_PWMStruct_3.TIM_Prescaler = 1 - 1;         //this paremeter can be use to setting Freq
    TIM_PWMStruct_3.TIM_CounterMode = TIM_CounterMode_Up;
    TIM_TimeBaseInit(TIM3,&TIM_PWMStruct_3);   
    //ICStructInit
    //T1andT2 counter
    TIM_ICInitTypeDef TIM_ICInitStructure_3;
    TIM_ICStructInit(&TIM_ICInitStructure_3);
    TIM_ICInitStructure_3.TIM_Channel = TIM_Channel_1;
    TIM_ICInitStructure_3.TIM_ICFilter = 0xF;
    TIM_ICInit(TIM3,&TIM_ICInitStructure_3);
    TIM_ICInitStructure_3.TIM_Channel = TIM_Channel_2;                                
	TIM_Cmd(TIM3,ENABLE);    
    TIM_ICInitStructure_3.TIM_ICFilter = 0xF;
    TIM_ICInit(TIM3,&TIM_ICInitStructure_3);
    //ENCODEconfig
    TIM_EncoderInterfaceConfig(TIM3,TIM_EncoderMode_TI12,TIM_ICPolarity_Rising,TIM_ICPolarity_Rising );
    
    TIM_Cmd(TIM3,ENABLE);
    //TIM4_1~2
    //GPIO_Init
    GPIO_InitTypeDef GPIO_InitStructure_4;
	GPIO_InitStructure_4.GPIO_Pin = GPIO_Pin_6 | GPIO_Pin_7;
	GPIO_InitStructure_4.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure_4.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_Init(GPIOB,&GPIO_InitStructure_4);
     //time init
    TIM_TimeBaseInitTypeDef TIM_PWMStruct_4;
    TIM_PWMStruct_4.TIM_Period = 65536 - 1;            //this paremeter is Reso 
    TIM_PWMStruct_4.TIM_Prescaler = 1 - 1;         //this paremeter can be use to setting Freq
    TIM_PWMStruct_4.TIM_CounterMode = TIM_CounterMode_Up;
    TIM_TimeBaseInit(TIM4,&TIM_PWMStruct_4);   
    //ICStructInit
    //T1andT2 counter
    TIM_ICInitTypeDef TIM_ICInitStructure_4;
    TIM_ICStructInit(&TIM_ICInitStructure_4);
    TIM_ICInitStructure_4.TIM_Channel = TIM_Channel_1;
    TIM_ICInitStructure_4.TIM_ICFilter = 0xF;
    TIM_ICInit(TIM4,&TIM_ICInitStructure_4);
    TIM_ICInitStructure_4.TIM_Channel = TIM_Channel_2;                                
	TIM_Cmd(TIM4,ENABLE);    
    TIM_ICInitStructure_4.TIM_ICFilter = 0xF;
    TIM_ICInit(TIM4,&TIM_ICInitStructure_4);
    //ENCODEconfig
    TIM_EncoderInterfaceConfig(TIM4,TIM_EncoderMode_TI12,TIM_ICPolarity_Rising,TIM_ICPolarity_Rising );
    
    TIM_Cmd(TIM4,ENABLE);
      
}
                
int Read_Encoder1(void){
    
    int Encoder_TIM_1;
    Encoder_TIM_1 = TIM_GetCounter(TIM1);
    TIM_SetCounter(TIM1,0);
    return Encoder_TIM_1;
}
int Read_Encoder2(void){
    
    int Encoder_TIM_2;
    Encoder_TIM_2 = TIM_GetCounter(TIM2);
    TIM_SetCounter(TIM2,0);
    return Encoder_TIM_2;
}
int Read_Encoder3(void){
    
    int Encoder_TIM_3;
    Encoder_TIM_3 = TIM_GetCounter(TIM3);
    TIM_SetCounter(TIM3,0);
    return Encoder_TIM_3;
}
int Read_Encoder4(void){
    
    int Encoder_TIM_4;
    Encoder_TIM_4 = TIM_GetCounter(TIM4);
    TIM_SetCounter(TIM4,0);
    return Encoder_TIM_4;
}

