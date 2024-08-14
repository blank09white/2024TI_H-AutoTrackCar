#ifndef __PWM_H
#define __PWM_H
#include "stdint.h"

void PwmInit01(uint16_t arr,uint16_t psc);
void PwmInit02(uint16_t arr,uint16_t psc);

void PWM_SetCompareTIM3_3(uint16_t Compare);
void PWM_SetCompareTIM3_4(uint16_t Compare);
void PWM_SetCompareTIM2_3(uint16_t Compare);
void PWM_SetCompareTIM2_4(uint16_t Compare);
#endif


