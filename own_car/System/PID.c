#include "stm32f10x.h"
#include "PID.h"

pid_t motorA;

void pid_Init(pid_t *pid,uint32_t mode,float p,float i,float d){
    
    pid->pid_mode = mode;
    pid->p = p;
    pid->i = i;
    pid->d = d;
}

void pid_control(){
    
    //1.setting target speed
    motorA.target = 200;
    //2.get current speed
    
    //3.put it in pid control to computer
    pid_cal(&motorA);
    //4.pid output value to motor
    //motor_duty(motorA.out);
}


void pid_cal(pid_t *pid){
    
    //computer current error
    pid->error[0] = pid -> target - pid -> now;
    //computer output
    if(pid -> pid_mode == DELTA_PID){//surge 
        pid->pout = pid->p * (pid->error[0] - pid -> error[1]);
        pid->iout = pid->i * pid -> error[0];
        pid->dout = pid->d * (pid -> error[0] -2 * pid ->error[1] +pid->error[2]);
        pid->out += pid -> pout +pid -> iout +pid ->dout;
        
    }
    else if(pid ->pid_mode == POSITION_PID){//position
        
        pid->pout = pid->p * pid->error[0];
        pid->iout = pid->i * pid -> error[0];
        pid->dout = pid->d * (pid -> error[0] - pid ->error[1]);
        pid->out = pid -> pout +pid -> iout +pid ->dout;
    }
    //rember before error
    pid->error[2] = pid->error[1];
    pid->error[1] = pid->error[0];
    
    //output limit
    uint8_t MAX_DUTY = 100;
    if(pid -> out >= MAX_DUTY)
        pid->out = MAX_DUTY;
    if(pid -> out <= 0)
        pid -> out = 0;
}