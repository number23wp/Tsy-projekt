       #include <math.h>
const int ledPin=12;                 //Connect the LED Grove module to Pin12, Digital 12
const int thresholdvalue=10;  
int sensorValue; 

float Rsensor; //Resistance of sensor in K

       
          
void foto(void) 
{
  sensorValue = analogRead(0);
    //The treshold for which the LED should turn on. 
  Rsensor=(float)(1023-sensorValue)*10/sensorValue;
  if(Rsensor>thresholdvalue)
  {
    digitalWrite(ledPin,HIGH);
  }
  else
  {
  digitalWrite(ledPin,LOW);
  }
 
}

void wyswfoto(void)
{
  
  //Serial.println("the analog read data is ");
  Serial.print(sensorValue);
  Serial.print(" , ");
 // Serial.println("the sensor resistance is ");
  Serial.print(Rsensor,DEC);//show the ligth intensity on the serial monitor;
  Serial.print("\n");
  delay(100);
}
