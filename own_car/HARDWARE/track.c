#include "stm32f10x.h"
#include "Motor.h"

uint8_t track(){
    uint8_t left01,left02,left03,left04,right01,right02,right03,right04;
    if(left04 == 0 && left03 == 0 && left02 == 0 && left01 == 1 && right01 == 1 && right02 == 0 &&right03 == 0 && right04 == 0){
        Go_StraightAndBack(1);
        return 1;
    }
    //tendency left
    else if(left04 == 0 && left03 == 0 && left02 == 1 && left01 ==0  && right01 ==0  && right02 == 0 &&right03 == 0 && right04 == 0){
        Turn_left_45();
        return 1;
    }
    else if(left04 == 0 && left03 == 1 && left02 == 0 && left01 ==0  && right01 ==0  && right02 == 0 &&right03 == 0 && right04 == 0){
        Turn_left_67();
        return 1;
    }
    else if(left04 == 1 && left03 ==0  && left02 == 0 && left01 ==0  && right01 ==0  && right02 == 0 &&right03 == 0 && right04 == 0){
        Turn_left_78();
        return 1;
    }
    //tendency right
     else if(left04 == 0 && left03 == 0 && left02 == 0 && left01 ==0  && right01 ==0  && right02 == 1 &&right03 == 0 && right04 == 0){
        Turn_right_45();
         return 1;
    }
    else if(left04 == 0 && left03 == 0 && left02 == 0 && left01 ==0  && right01 ==0  && right02 == 0 &&right03 == 1 && right04 == 0){
        Turn_right_67();
        return 1;
    }
    else if(left04 == 0 && left03 ==0  && left02 == 0 && left01 ==0  && right01 ==0  && right02 == 0 &&right03 == 0 && right04 == 1){
        Turn_right_78();
        return 0;
    }

}