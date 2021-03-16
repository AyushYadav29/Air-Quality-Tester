#include <LiquidCrystal.h>
#include <Servo.h>
Servo servo_test;  
//RS,Enable,4 Data Pins
LiquidCrystal lcd(5,6,8,9,10,11); 
int angle = 0;  
int redled = 2;
int greenled = 7;
int buzzer = 4;
int sensor = A0;
int sensorThresh1 = 400;
int sensorThresh2 = 600;

/* Assumption
1> reading <=400      absolutely pure air
2> 400<reading<600    poor quality air in neede of purification                   
3> reading>600        serious contamination of air 
                       need immidiate action.
*/
void setup()
{
pinMode(redled, OUTPUT);
pinMode(greenled,OUTPUT);
pinMode(buzzer,OUTPUT);
pinMode(sensor,INPUT);
servo_test.attach(3);
Serial.begin(9600);
lcd.begin(16,2);
}

void loop()
{
  int analogValue = analogRead(sensor);
  Serial.println(analogValue);
  
  lcd.clear();
  lcd.setCursor (0, 0);
  lcd.print ("Air Qual: ");
  lcd.print (analogValue);
  lcd.print (" PPM ");
  delay(500);
   if(analogValue<sensorThresh1) 
  {
    
    digitalWrite(greenled,HIGH);
    digitalWrite(redled,LOW);
    noTone(buzzer);
    angle=30;
    servo_test.write(angle);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("clean air");
    delay(500);
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print("no action ");
    delay(500);
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print("required ");
    
  }
  else if(analogValue<sensorThresh2 && analogValue>sensorThresh1)
  {
    digitalWrite(redled,HIGH);
    digitalWrite(greenled,LOW);
    noTone(buzzer);
    angle=60;
    Serial.println(angle);
    servo_test.write(angle);
  	lcd.clear();
    lcd.setCursor(0,1);
    lcd.print("poor air");
    delay(500);
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print("purify");
    
  }
  else if(analogValue>sensorThresh2)
  {
    digitalWrite(redled,HIGH);
    digitalWrite(greenled,LOW);
    //output,pitch,length of pitch
    tone(buzzer,1000,10000);
    angle= 90;
    
    servo_test.write(angle);
  	
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print("ALERT");
    delay(00);
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print("critical action ");
    delay(500);
    lcd.clear();
    lcd.setCursor(0,2);
     lcd.print("required ");
    
  }
  
delay(500);
     
}