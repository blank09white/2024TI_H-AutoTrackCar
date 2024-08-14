#ifndef __Motor_H__
#define __Motor_H__
#include "stdint.h"
void Go_StraightAndBack(uint8_t flag);
void Turn_right();
void Turn_left();
void Turn_Rotate();

void Go_StraightAndBack_F(uint8_t flag);
void Turn_left_F();
void Turn_right_F();
void Turn_Rotate_F();

void Stop();

//********angle********//
void Turn_left_45();
void Turn_left_67();
void Turn_left_78();
void Turn_right_45();
void Turn_right_67();
void Turn_right_78();
#endif
