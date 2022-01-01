#include "L298N.H"

L298N::L298N(int ena, int in1, int in2, int in3, int in4, int enb){
    _ena = ena;
    _in1 = in1;
    _in2 = in2;
    _in3 = in3;
    _in4 = in4;
    _enb = enb;
  pinMode(ena, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enb, OUTPUT);


}

void L298N::SetSpeed(int SPD) {
  analogWrite(_ena, SPD);
  analogWrite(_enb, SPD);
}
void L298N::motor1_forward(){
  digitalWrite(_in1, 1);
  digitalWrite(_in2, 0);
}
void L298N::motor1_backward(){
  digitalWrite(_in1, 0);
  digitalWrite(_in2, 1);
}
void L298N::motor1_stop(){
  digitalWrite(_in1, 0);
  digitalWrite(_in2, 0);
}
void L298N::motor2_forward(){
  digitalWrite(_in3, 1);
  digitalWrite(_in4, 0);  
}
void L298N::motor2_backward(){
  digitalWrite(_in1, 0);
  digitalWrite(_in2, 1);
}
void L298N::motor2_stop(){
  digitalWrite(_in3, 0);
  digitalWrite(_in4, 0);
}