#include <math.h>
#include <LiquidCrystal.h>
const int ledPin=12;                 //Connect the LED Grove module to Pin12, Digital 12
const int thresholdvalue=10;  
int sensorValue; 
int Temp;
 byte i;
  byte present = 0;
  byte type_s;
  byte data[12];
  byte addr[8];
  float celsius;

int CoSensorOutput = 1; //analog Pin connected to "out" from sensor board
int CoData = 1;         //analog sensor data

float Rsensor; //Resistance of sensor in K

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int inpin1 = 6;
int inpin2 = 7;
int inpin3 = 8;

boolean stan1 = false;
boolean stan2 = false;
boolean stan3 = false;

void setup() 
{
  Serial.begin(9600);               //Start the Serial connection
  pinMode(ledPin,OUTPUT);
  
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("start");
  pinMode(inpin1, INPUT);
  pinMode(inpin2, INPUT);
  pinMode(inpin3, INPUT);
}

void loop()
{
 
foto();
temp();
mq7();
przyciski();
wyswietlanie();
}

