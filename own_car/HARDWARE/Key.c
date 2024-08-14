#include "stm32f10x.h"
#include "Delay.h"

void KeyInit(){
    
    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8 | GPIO_Pin_9;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOC,&GPIO_InitStructure);   
}

//press button into task of funcation 
uint8_t Key_GetNumber(){
    uint8_t KeyNum = 0;
    if(GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_8) == 0){
        Delay_ms(10);
        if(GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_8) == 0){
             while(GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_8) == 0); 
        }
     return KeyNum = 1;
    }
    else if(GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_9) == 0){
        Delay_ms(20);
        if(GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_9) == 0){
            while(!GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_9));
            return KeyNum = 2;
        }
    }
    else if(GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_8) == 0){
        Delay_s(20);
        if(GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_8) == 0){
            while(!GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_8));       
            return KeyNum = 3;
        }
    }
    else if(GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_9) == 0){
        Delay_s(20);
        if(GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_9) == 0){
            while(!GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_9));
            return KeyNum = 4;
        }
    }
    
}