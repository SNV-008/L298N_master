#ifndef L298N_H
#define L298N_H
#include "Arduino.h"

class L298N{
  public:
   L298N(int ena, int in1, int in2, int in3, int in4, int enb);
   int _ena;
   int _in1;
   int _in2;
   int _in3;
   int _in4;
   int _enb;

void motor1_forward();
void motor1_stop();
void motor1_backward();
void motor2_forward();
void motor2_stop();
void motor2_backward();
void SetSpeed(int SPD);
};


#endif