// This is written by SNV-008
// You can visit my Github library page of this library page by :- https://github.com/SNV-008/L298N_master
//Pls support me

#include <L298N.h> // initializes the library and includes it


L298N l298n(6, 7, 8, 9, 10, 11); //to write ena, in1, in2, in3, in4, enb respectively.


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); // beginning the Serial communication at the baud rate of 9600
}
void loop() {
  uint8_t i;
  // put your main code here, to run repeatedly:
   for (i=0; i<255; i++) {
    l298n.SetSpeed(i);  
    delay(10);
 }
l298n.motor1_forward();// first motor goes forward
     for (i=255; i!=0; i--) {
    l298n.SetSpeed(i);  
    delay(10);
 }
delay(1000); // 1 sec delay
l298n.motor1_stop();
delay(1000);
     for (i=0; i<255; i++) {
    l298n.SetSpeed(i);  
    delay(10);
 }
l298n.motor1_backward(); // first motor goes again backward
       for (i=255; i!=0; i--) {
    l298n.SetSpeed(i);  
    delay(10);
 }
delay(1000); // 1 sec delay
l298n.motor1_stop();
delay(1000);
       for (i=0; i<255; i++) {
    l298n.SetSpeed(i);  
    delay(10);
 }
l298n.motor2_forward(); // second motor goes forward
         for (i=255; i!=0; i--) {
    l298n.SetSpeed(i);  
    delay(10);
 }
delay(1000); // 1sec delay
l298n.motor2_stop();
delay(1000);
         for (i=0; i<255; i++) {
    l298n.SetSpeed(i);  
    delay(10);
 }
l298n.motor2_backward(); // second motor goes backward
           for (i=255; i!=0; i--) {
    l298n.SetSpeed(i);  
    delay(10);
delay(1000); // 1 sec delay
l298n.motor2_stop();
delay(1000);
}
