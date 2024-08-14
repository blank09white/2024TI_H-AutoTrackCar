#ifndef __PID_H__
#define __PID_H__

#include "stdint.h"
enum{
    POSITION_PID = 0,
    DELTA_PID,
    
};
typedef struct{
    
    float target;
    float now;
    float error[3];
    float p,i,d;
    float pout,dout,iout;
    float out;
    
    uint32_t pid_mode;
    
    
}pid_t;

void pid_cal(pid_t *pid);
void pid_control();
void pid_Init(pid_t *pid,uint32_t mode,float p,float i,float d);

extern pid_t motorA;
#endif
