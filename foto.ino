          
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


