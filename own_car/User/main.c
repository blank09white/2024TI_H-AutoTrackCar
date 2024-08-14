#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "task.h"
#include "Key.h"
#include "PID.h"
#include "Motor.h"
#include "Encode.h"
#include "stdio.h"
#include "PWM.h"
#include "OLED.h"
#include "track.h"


 uint8_t key;

 
int main(void)
{
   
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA | RCC_APB2Periph_GPIOB | 
                           RCC_APB2Periph_GPIOC | RCC_APB2Periph_GPIOD ,ENABLE);
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO,ENABLE);

	//gpio init
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_1 | GPIO_Pin_2 | GPIO_Pin_3 | GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_11 | GPIO_Pin_12;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(GPIOA,&GPIO_InitStructure);
    
      KeyInit();
//    GPIO_InitTypeDef GPIO_InitStructure01;
//    GPIO_InitStructure01.GPIO_Pin = GPIO_Pin_15 | GPIO_Pin_4 | GPIO_Pin_3 | GPIO_Pin_5;
//    GPIO_InitStructure01.GPIO_Mode = GPIO_Mode_IPU;
//    GPIO_InitStructure01.GPIO_Speed = GPIO_Speed_50MHz;
//    GPIO_Init(GPIOB,&GPIO_InitStructure01);
//    
//    GPIO_InitTypeDef GPIO_InitStructure02;
//    GPIO_InitStructure02.GPIO_Pin = GPIO_Pin_11 | GPIO_Pin_7 | GPIO_Pin_6;
//    GPIO_InitStructure02.GPIO_Mode = GPIO_Mode_IPU;
//    GPIO_InitStructure02.GPIO_Speed = GPIO_Speed_50MHz;
//    GPIO_Init(GPIOC,&GPIO_InitStructure02);
//    
//    GPIO_InitTypeDef GPIO_InitStructure03;
//    GPIO_InitStructure03.GPIO_Pin =GPIO_Pin_2;
//    GPIO_InitStructure03.GPIO_Mode = GPIO_Mode_IPU;
//    GPIO_InitStructure03.GPIO_Speed = GPIO_Speed_50MHz;
//    GPIO_Init(GPIOD,&GPIO_InitStructure03);
    
//  pid_Init(&motorA, DELTA_PID, 3,4,5);
//    OLED_Init();
    
    PwmInit01(100-1,720-1); 
    PwmInit02(100-1,720-1);
    


//    
//    Go_StraightAndBack_F(1);
//    Delay_s(3);
//    Stop();
  
    

	while(1){  
        
            uint8_t flag01 = 1;
            while(flag01){
                track();
                flag01 = track();       
            }
//        key = Key_GetNumber();  
//        if(key == 1){
//            task01();
//            key = 0;  
//        }
//        if(key == 2){
//            task02();
//            key = 0;  
//        }
//        if(key == 3){
//            task03();
//            key = 0;  
//        }
//        if(key == 4){
//            task04();
//            key = 0;  
//        }
	}
}

//void TIM1_BRK_IRQHandler(void){
//    
//    if(TIM_GetITStatus(TIM1,TIM_IT_Update) == SET){
//        //per time to get speed
//        Speed1 = Read_Encoder1();
//        TIM_ClearITPendingBit(TIM1,TIM_IT_Update);
//    }
//    
//}

//void TIM2_IRQHandler(void){
//    
//    if(TIM_GetITStatus(TIM2,TIM_IT_Update) == SET){
//        //per time to get speed
//        Speed2 = Read_Encoder2();
//        TIM_ClearITPendingBit(TIM2,TIM_IT_Update);
//    }
//    
//}

//void TIM3_IRQHandler(void){
//    
//    if(TIM_GetITStatus(TIM3,TIM_IT_Update) == SET){
//        //per time to get speed
//        Speed3 = Read_Encoder3();
//        TIM_ClearITPendingBit(TIM3,TIM_IT_Update);
//    }
//    
//}

//void TIM4_IRQHandler(void){
//    
//    if(TIM_GetITStatus(TIM4,TIM_IT_Update) == SET){
//        //per time to get speed
//        Speed4 = Read_Encoder4();
//        TIM_ClearITPendingBit(TIM4,TIM_IT_Update);
//    }
//    
//}
