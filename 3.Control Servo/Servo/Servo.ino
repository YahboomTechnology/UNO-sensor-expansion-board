/**
* @par Copyright (C): 2010-2019, Shenzhen Yahboom Tech
* @file         Servo.c
* @author       Jessica
* @version      V1.0
* @date         2019.09.17
* @brief        
* @details
* @par History  
*
*/
#include <Servo.h>  

Servo myservo1;     
Servo myservo2;     
Servo myservo3;

//Define pin of servo
int ServoPin3 = 3;
int ServoPin1 = 5;
int ServoPin2 = 6;

/**
* Function       setup
* @author        Jessica
* @date          2019.8.21
* @brief         
* @param[in]     void
* @retval        void
* @par History   no
*/
void setup()
{
  //servo connect to P3,5,6 of Arduino UNO
  myservo1.attach(ServoPin1);
  myservo2.attach(ServoPin2);
  myservo1.attach(ServoPin3);
  
  //Initialize the servo 90 degrees
  int ServoPos = 90;
  myservo1.write(ServoPos);
  myservo2.write(ServoPos);
  myservo3.write(ServoPos);
}
/**
* Function       servo_control
* @author        Jessica
* @date          2019.8.21
* @brief         
* @param[in]     void
* @retval        void
* @par History   no
*/
void servo_control()
{
  int pos = 0;
  for (pos = 0; pos < 180; pos++)
  {
    myservo1.write(pos);
    myservo2.write(pos);
    myservo3.write(pos);
    delay(20);
  }

  for (pos = 180; pos > 0; pos--)
  {
    myservo1.write(pos);
    myservo2.write(pos);
    myservo3.write(pos);
    delay(20);
  }
}
/**
* Function       loop
* @author        Jessica
* @date          2019.8.21
* @brief         
* @param[in]     void
* @retval        void
* @par History   no
*/
void loop()
{
  delay(500);
  servo_control();
}
