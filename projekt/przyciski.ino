void przyciski(void)
{
  if(digitalRead(inpin1) == HIGH)
  {
 stan1 = true;
 stan2 = false;
 stan3 = false;
 delay(100);
  }
  if(digitalRead(inpin2) == HIGH)
  {
 stan1 = false;
 stan2 = true;
 stan3 = false;
 delay(100);
  }
  if(digitalRead(inpin3) == HIGH)
  {
 stan1 = false;
 stan2 = false;
 stan3 = true;
 delay(100);
  }
}
   
