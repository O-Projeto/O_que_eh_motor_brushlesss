#include <Arduino.h>
#include <ESP32Servo.h>

Servo esc;

#define pinPot 33
#define pinEsc 2

void setup()
{
esc.attach(pinEsc); 
// esc.writeMicroseconds(1500); 
Serial.begin(9600);

delay(255);

// for(int i = 1500; i<=2000; i++){
//     esc.writeMicroseconds(i); 
// }
esc.writeMicroseconds(1500); 
}

void loop()
{
int val; 

val= analogRead(pinPot);
// Serial.print(val);
// Serial.print(" | ");

val= map(val, 0, 4096,1000,2000); 
Serial.println(val);

// delay(2000); 

esc.writeMicroseconds(val); 

}