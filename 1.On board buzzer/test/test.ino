/*
* @par Copyright (C): 2010-2019, Shenzhen Yahboom Tech
* @file         test
* @author       xiaojie
* @version      V1.0
* @date         2019.8.21
* @brief        test buzzer
* @details
* @par History  
*
*/
int buzzer = 13;  //buzzer connect to P13 pin of Arduino board

void setup() 
{ 
  pinMode(buzzer,OUTPUT); //Set digital IO pin mode, OUTPUT is output
} 

void loop() 
{ 
  unsigned char i,j;
  for(i=0; i<80; i++)//Output a frequency of sound
  {
    digitalWrite(buzzer,HIGH);
    delay(1);
    digitalWrite(buzzer,LOW);
    delay(1);
  }
  for(i=0; i<100; i++)//Output another frequency of sound
  {
    digitalWrite(buzzer,HIGH);
    delay(2);
    digitalWrite(buzzer,LOW);
    delay(2);
  }
}

