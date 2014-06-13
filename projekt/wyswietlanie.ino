void wyswietlanie (void)
{
  /*
  switch (Serial.read())
{
  
  case '1':
   Serial.print("\n");
   Serial.print("fotorezystor: ");
   Serial.print(sensorValue);
  Serial.print(" , ");
 // Serial.println("the sensor resistance is ");
  Serial.print(Rsensor,DEC);//show the ligth intensity on the serial monitor;
  Serial.print("\n");
  break;
  //delay(100);
  case '2':
  Serial.print("\n");
  Serial.print("Czujnik temperatury: ");
  Serial.print(celsius);
  Serial.print(" C");
  Serial.print("\n");
  break;
  case '3':
  Serial.print("\n");
  Serial.print("Czujnik tlenku wegla: ");
  if(MQ7.CurrentState() == LOW){   //we are at 1.4v, read sensor data!
    CoData = analogRead(CoSensorOutput);
    Serial.println(CoData);
    
   
  }
  else{                            //sensor is at 5v, heating time
    Serial.println(" sensor heating!");
  }      
  break;
}
*/
 Serial.print("stan1 = ");    
    Serial.print(stan1);  
    Serial.print("\n");
    Serial.print("stan2 = ");    
    Serial.print(stan2); 
    Serial.print("\n");
   Serial.print("stan3 = ");    
    Serial.print(stan3); 
    Serial.print("\n");
    Serial.print("\n");
  //delay(1000); 
  //delay(1000);
///////////////////////////////////////////////////////////////////////////////
if(stan1==true)
{
 lcd.setCursor(0, 0);
lcd.print("Czujnik temp. :");
lcd.setCursor(0, 1);
lcd.print(celsius);
lcd.print(" C            ");
}

if(stan2==true)
{
  lcd.setCursor(0, 0);
  lcd.print("tlenek wegla:  ");
  lcd.setCursor(0, 1);
  if(MQ7.CurrentState() == LOW){   //we are at 1.4v, read sensor data!
    CoData = analogRead(CoSensorOutput);
    lcd.print(CoData);
    lcd.print("             ");
  }
  else{                            //sensor is at 5v, heating time
    lcd.print("sensor heating!");
    lcd.print("             ");
  }      
}
if(stan3==true)
{
  lcd.setCursor(0, 0);
 lcd.print("fotorezystor: ");
lcd.setCursor(0, 1);
   lcd.print(sensorValue);
  lcd.print(" , ");
 // Serial.println("the sensor resistance is ");
  lcd.print(Rsensor,DEC);//show the ligth intensity on the serial monitor;
  lcd.print("             ");
}
}
