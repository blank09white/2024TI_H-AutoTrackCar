#include "stm32f10x.h"
#include "Motor.h"
#include "Delay.h"
#include "track.h"

void task01(){
    Go_StraightAndBack_F(1);
    Delay_s(3);
    Stop();
    //********LEDandBEE********//
    
    //********LEDandBEE********//    
}
void task02(){
   
    uint8_t num = 4;
    while(num--){
    Go_StraightAndBack_F(1);
    Delay_s(3);
    Stop();
    //********LEDandBEE********//
    
    //********LEDandBEE********//
    uint8_t flag01 = 1;
    while(flag01){
        track();
        flag01 = track();       
    }
    Stop();
    Go_StraightAndBack_F(1);
    Delay_s(3);
    //********LEDandBEE********//
    
    //********LEDandBEE********//
    uint8_t flag02 = 1;
    while(flag02){
        track();
        flag02 = track();       
    }
   }
   Stop();
   //********LEDandBEE********//
    
   //********LEDandBEE********// 
}

void task03(){
    Go_StraightAndBack_F(1);
    Delay_s(3);
    //trun angle PID
    
    //turn angle PID
    uint8_t flag03 = 1;
    while(flag03){
        track();
        flag03 = track();       
    }
    Stop();
    //trun angle PID
    
    //turn angle PID
    Go_StraightAndBack_F(1);
    Delay_s(3);
    uint8_t flag04 = 1;
    while(flag04){
        track();
        flag04 = track();       
    }
    Stop();
}
void task04(){
    uint8_t num = 5;
    while(num--){
        Go_StraightAndBack_F(1);
        Delay_s(3);
        //trun angle PID

        //turn angle PID
        uint8_t flag03 = 1;
        while(flag03){
            track();
            flag03 = track();       
        }
        Stop();
        //trun angle PID

        //turn angle PID
        Go_StraightAndBack_F(1);
        Delay_s(3);
        uint8_t flag04 = 1;
        while(flag04){
            track();
            flag04 = track();       
        }
        Stop();
    
    }
}


