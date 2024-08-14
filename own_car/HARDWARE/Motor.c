#include "stm32f10x.h"
#include "delay.h"
#include "PWM.h"


/*
@Lan7NASA666@outlook.com
2024.8.06
*/
//**************tricycle****************//
void Go_StraightAndBack(uint8_t flag){
    //Straight
    if(flag == 1){
    GPIO_SetBits(GPIOA,GPIO_Pin_0);
    GPIO_ResetBits(GPIOA,GPIO_Pin_1);
    GPIO_SetBits(GPIOA,GPIO_Pin_2);
    GPIO_ResetBits(GPIOA,GPIO_Pin_3);    
            //setting duty here    
    }
    //back
    else{        
    GPIO_ResetBits(GPIOA,GPIO_Pin_0);
    GPIO_SetBits(GPIOA,GPIO_Pin_1);
    GPIO_SetBits(GPIOA,GPIO_Pin_2);
    GPIO_ResetBits(GPIOA,GPIO_Pin_3);                          
    }   
   
}
void Turn_right(){
    //left
    GPIO_SetBits(GPIOA,GPIO_Pin_0);
    GPIO_ResetBits(GPIOA,GPIO_Pin_1);
    //right
    GPIO_SetBits(GPIOA,GPIO_Pin_2);
    GPIO_ResetBits(GPIOA,GPIO_Pin_3);
     
    
}

void Turn_left(){
    //left
    GPIO_SetBits(GPIOA,GPIO_Pin_0);
    GPIO_ResetBits(GPIOA,GPIO_Pin_1);
    //right
    GPIO_SetBits(GPIOA,GPIO_Pin_2);
    GPIO_ResetBits(GPIOA,GPIO_Pin_3);
    
}
//****************you can add angle in here*************//
//**********left************//
void Turn_left_45(){
    //left  1
    GPIO_SetBits(GPIOA,GPIO_Pin_0);
    GPIO_ResetBits(GPIOA,GPIO_Pin_1);
    PWM_SetCompareTIM2_3(15);
    //left  2
    GPIO_SetBits(GPIOA,GPIO_Pin_2);
    GPIO_ResetBits(GPIOA,GPIO_Pin_3);
    PWM_SetCompareTIM2_4(15);
    
    //right 1
    GPIO_SetBits(GPIOA,GPIO_Pin_4);
    GPIO_ResetBits(GPIOA,GPIO_Pin_5);
    PWM_SetCompareTIM3_3(20);
    //right 2
    GPIO_SetBits(GPIOA,GPIO_Pin_11);
    GPIO_ResetBits(GPIOA,GPIO_Pin_12);
    PWM_SetCompareTIM3_4(20);
    
}

void Turn_left_67(){
    //left  1
    GPIO_SetBits(GPIOA,GPIO_Pin_0);
    GPIO_ResetBits(GPIOA,GPIO_Pin_1);
    PWM_SetCompareTIM2_3(15);
    //left  2
    GPIO_SetBits(GPIOA,GPIO_Pin_2);
    GPIO_ResetBits(GPIOA,GPIO_Pin_3);
    PWM_SetCompareTIM2_4(15);
    
    //right 1
    GPIO_SetBits(GPIOA,GPIO_Pin_4);
    GPIO_ResetBits(GPIOA,GPIO_Pin_5);
    PWM_SetCompareTIM3_3(25);
    //right 2
    GPIO_SetBits(GPIOA,GPIO_Pin_11);
    GPIO_ResetBits(GPIOA,GPIO_Pin_12);
    PWM_SetCompareTIM3_4(25);
   
}

void Turn_left_78(){
    //left  1
    GPIO_SetBits(GPIOA,GPIO_Pin_0);
    GPIO_ResetBits(GPIOA,GPIO_Pin_1);
    PWM_SetCompareTIM2_3(15);
    //left  2
    GPIO_SetBits(GPIOA,GPIO_Pin_2);
    GPIO_ResetBits(GPIOA,GPIO_Pin_3);
    PWM_SetCompareTIM2_4(15);
    
    //right 1
    GPIO_SetBits(GPIOA,GPIO_Pin_4);
    GPIO_ResetBits(GPIOA,GPIO_Pin_5);
    PWM_SetCompareTIM3_3(27);
    //right 2
    GPIO_SetBits(GPIOA,GPIO_Pin_11);
    GPIO_ResetBits(GPIOA,GPIO_Pin_12);
    PWM_SetCompareTIM3_4(27);
     
}
//**********right************//
void Turn_right_45(){
    //left  1
    GPIO_SetBits(GPIOA,GPIO_Pin_0);
    GPIO_ResetBits(GPIOA,GPIO_Pin_1);
    PWM_SetCompareTIM2_3(20);
    //left  2
    GPIO_SetBits(GPIOA,GPIO_Pin_2);
    GPIO_ResetBits(GPIOA,GPIO_Pin_3);
    PWM_SetCompareTIM2_4(20);
    
    //right 1
    GPIO_SetBits(GPIOA,GPIO_Pin_4);
    GPIO_ResetBits(GPIOA,GPIO_Pin_5);
    PWM_SetCompareTIM3_3(15);
    //right 2
    GPIO_SetBits(GPIOA,GPIO_Pin_11);
    GPIO_ResetBits(GPIOA,GPIO_Pin_12);
    PWM_SetCompareTIM3_4(15);
    
}

void Turn_right_67(){
    //left  1
    GPIO_SetBits(GPIOA,GPIO_Pin_0);
    GPIO_ResetBits(GPIOA,GPIO_Pin_1);
    PWM_SetCompareTIM2_3(25);
    //left  2
    GPIO_SetBits(GPIOA,GPIO_Pin_2);
    GPIO_ResetBits(GPIOA,GPIO_Pin_3);
    PWM_SetCompareTIM2_4(25);
    
    //right 1
    GPIO_SetBits(GPIOA,GPIO_Pin_4);
    GPIO_ResetBits(GPIOA,GPIO_Pin_5);
    PWM_SetCompareTIM3_3(15);
    //right 2
    GPIO_SetBits(GPIOA,GPIO_Pin_11);
    GPIO_ResetBits(GPIOA,GPIO_Pin_12);
    PWM_SetCompareTIM3_4(15);
   
}

void Turn_right_78(){
    //left  1
    GPIO_SetBits(GPIOA,GPIO_Pin_0);
    GPIO_ResetBits(GPIOA,GPIO_Pin_1);
    PWM_SetCompareTIM2_3(28);
    //left  2
    GPIO_SetBits(GPIOA,GPIO_Pin_2);
    GPIO_ResetBits(GPIOA,GPIO_Pin_3);
    PWM_SetCompareTIM2_4(28);
    
    //right 1
    GPIO_SetBits(GPIOA,GPIO_Pin_4);
    GPIO_ResetBits(GPIOA,GPIO_Pin_5);
    PWM_SetCompareTIM3_3(15);
    //right 2
    GPIO_SetBits(GPIOA,GPIO_Pin_11);
    GPIO_ResetBits(GPIOA,GPIO_Pin_12);
    PWM_SetCompareTIM3_4(15);
   
}


//****************you can add angle in here*************//
void Turn_Rotate(){
    //left
    GPIO_SetBits(GPIOA,GPIO_Pin_0);
    GPIO_ResetBits(GPIOA,GPIO_Pin_1);
    //right
    GPIO_ResetBits(GPIOA,GPIO_Pin_2);
    GPIO_SetBits(GPIOA,GPIO_Pin_3); 
   
    Delay_ms(20);
    //stop
    GPIO_ResetBits(GPIOA,GPIO_Pin_0);
    GPIO_ResetBits(GPIOA,GPIO_Pin_1);
    GPIO_ResetBits(GPIOA,GPIO_Pin_2);
    GPIO_ResetBits(GPIOA,GPIO_Pin_3);
}
//**************Tricycle****************//

//*******************Four_Wheel_Drive*****************//
void Go_StraightAndBack_F(uint8_t flag){
    //Straight
    if(flag == 1){
    //left 1
    GPIO_SetBits(GPIOA,GPIO_Pin_0);
    GPIO_ResetBits(GPIOA,GPIO_Pin_1); 
    PWM_SetCompareTIM2_3(20);
    //left 2
    GPIO_SetBits(GPIOA,GPIO_Pin_2);
    GPIO_ResetBits(GPIOA,GPIO_Pin_3);
    PWM_SetCompareTIM2_4(20);
    //right 1
    GPIO_SetBits(GPIOA,GPIO_Pin_4);
    GPIO_ResetBits(GPIOA,GPIO_Pin_5);
    PWM_SetCompareTIM3_3(20);
    //right 2
    GPIO_SetBits(GPIOA,GPIO_Pin_11);
    GPIO_ResetBits(GPIOA,GPIO_Pin_12);
    PWM_SetCompareTIM3_4(20);
    }
    //Back off
    else{
    //left 1
    GPIO_ResetBits(GPIOA,GPIO_Pin_0);
    GPIO_SetBits(GPIOA,GPIO_Pin_1); 
    
    //left 2
    GPIO_ResetBits(GPIOA,GPIO_Pin_2);
    GPIO_SetBits(GPIOA,GPIO_Pin_3);
    
    GPIO_ResetBits(GPIOA,GPIO_Pin_4);
    GPIO_SetBits(GPIOA,GPIO_Pin_5);

    //right 2
    GPIO_ResetBits(GPIOA,GPIO_Pin_11);
    GPIO_SetBits(GPIOA,GPIO_Pin_12);
       
    }
    
}

void Turn_left_F(){
    //left 1
    GPIO_SetBits(GPIOA,GPIO_Pin_0);
    GPIO_ResetBits(GPIOA,GPIO_Pin_1); 
    
    //left 2
    GPIO_SetBits(GPIOA,GPIO_Pin_2);
    GPIO_ResetBits(GPIOA,GPIO_Pin_3);
   
    //right 1
    GPIO_SetBits(GPIOA,GPIO_Pin_4);
    GPIO_ResetBits(GPIOA,GPIO_Pin_5);

    //right 2
    GPIO_SetBits(GPIOA,GPIO_Pin_11);
    GPIO_ResetBits(GPIOA,GPIO_Pin_12);
   
}

void Turn_right_F(){
    //left 1
    GPIO_SetBits(GPIOA,GPIO_Pin_0);
    GPIO_ResetBits(GPIOA,GPIO_Pin_1); 
    
    //left 2
    GPIO_SetBits(GPIOA,GPIO_Pin_2);
    GPIO_ResetBits(GPIOA,GPIO_Pin_3);
   
    //right 1
    GPIO_SetBits(GPIOA,GPIO_Pin_4);
    GPIO_ResetBits(GPIOA,GPIO_Pin_5);

    //right 2
    GPIO_SetBits(GPIOA,GPIO_Pin_11);
    GPIO_ResetBits(GPIOA,GPIO_Pin_12);
   
    
}

void Turn_Rotate_F(){
    //left 1
    GPIO_SetBits(GPIOA,GPIO_Pin_0);
    GPIO_ResetBits(GPIOA,GPIO_Pin_1); 
    
    //left 2
    GPIO_ResetBits(GPIOA,GPIO_Pin_2);
    GPIO_SetBits(GPIOA,GPIO_Pin_3);
    
    //right 1
    GPIO_SetBits(GPIOA,GPIO_Pin_4);
    GPIO_ResetBits(GPIOA,GPIO_Pin_5);

    //right 2
    GPIO_ResetBits(GPIOA,GPIO_Pin_11);
    GPIO_SetBits(GPIOA,GPIO_Pin_12);

    
}

void Stop(){
    GPIO_ResetBits(GPIOA,GPIO_Pin_0);
    GPIO_ResetBits(GPIOA,GPIO_Pin_1);
    GPIO_ResetBits(GPIOA,GPIO_Pin_2);
    GPIO_ResetBits(GPIOA,GPIO_Pin_3);
    GPIO_ResetBits(GPIOA,GPIO_Pin_4);
    GPIO_ResetBits(GPIOA,GPIO_Pin_5);
    GPIO_ResetBits(GPIOA,GPIO_Pin_11);
    GPIO_ResetBits(GPIOA,GPIO_Pin_12); 
}
































