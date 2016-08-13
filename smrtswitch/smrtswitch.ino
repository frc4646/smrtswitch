/*
Arduino program for the SMRT Switch
*/

#include <Servo.h>

//Definitions for inputs
#define leftXPin A0
#define rightXPin A1
#define leftYPin A2
#define rightYPin A3
#define inputOnePin A4
#define inputTwoPin A5

//Servos
Servo leftX;
Servo rightX;
Servo leftY;
Servo rightY;
Servo inputOne;
Servo inputTwo;

void setup() {
  Serial.begin(9600);
  //Servo attachment
  leftX.attach(3);
  rightX.attach(5);
  leftY.attach(6);
  rightY.attach(9);
  inputOne.attach(10);
  inputTwo.attach(11);
}

void loop() {
  //Writing a mapped input value to each servo
  leftX.write(map(analogRead(leftXPin), 0, 1023, 0, 179));
  rightX.write(map(analogRead(rightXPin), 0, 1023, 0, 179));
  leftY.write(map(analogRead(leftYPin), 0, 1023, 0, 179));
  rightY.write(map(analogRead(rightYPin), 0, 1023, 0, 179));
  inputOne.write(map(analogRead(inputOnePin), 0, 1023, 0, 179));
  inputTwo.write(map(analogRead(inputTwoPin), 0, 1023, 0, 179));
  //For testing purposes
  Serial.println(map(analogRead(inputTwoPin), 0, 1023, 0, 179));
  delay(15);
}
