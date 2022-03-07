#line 1 "C:\\Users\\Ambika\\Desktop\\LTTS\\Aishwarya\\sketch_1\\sketch_1.ino"
#include <Arduino.h>
#line 1 "C:\\Users\\Ambika\\Downloads\\car\\car.ino"
 // TECHATRONIC.COM  
 // I2C LIBRARY  
 //https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library  
 #include <Wire.h>           
 #include <LiquidCrystal.h>    
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);//lcd(RS,EN,D4,D5,D6,D7)

   
 #include <Servo.h>   
#define echo   2
#define trig   3

 Servo myservo1;  
 
 int Slot = 4;      //Enter Total number of parking Slots  
 int flag1 = 0;  
 int flag2 = 0;  
 float period;
#line 19 "C:\\Users\\Ambika\\Downloads\\car\\car.ino"
void setup();
#line 34 "C:\\Users\\Ambika\\Downloads\\car\\car.ino"
void loop();
#line 67 "C:\\Users\\Ambika\\Downloads\\car\\car.ino"
void time_Measurement();
#line 19 "C:\\Users\\Ambika\\Downloads\\car\\car.ino"
 void setup()  
 {  
   
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT); 
 myservo1.attach(6);  
 myservo1.write(100);  
 lcd.setCursor (0,0);  
 lcd.print("   ARDUINO  ");  
 lcd.setCursor (0,1);  
 lcd.print(" PARKING SYSTEM ");  
 delay (20000);  
 lcd.clear();   
 }  
 void loop(){
 time_Measurement();   
 if(flag1==0){  
 if(Slot>0){flag1=1;  
 if(flag2==0){myservo1.write(0); Slot = Slot-1;}  
 }else{  
   
 lcd.setCursor (0,0);  
 lcd.print("  SORRY 🙁  ");   
 lcd.setCursor (0,1);  
 lcd.print(" Parking Full ");  
 delay (30000); 
 lcd.clear();
   
 }  
 }  
 time_Measurement();
 if(flag2==0){flag2=1;  
 if(flag1==0){myservo1.write(0); Slot = Slot+1;}  
 }  
 if(flag1==1 && flag2==1){  
 delay (10000);  
 myservo1.write(100);  
 flag1=0, flag2=0;  
 }  
 lcd.setCursor (0,0);  
 lcd.print("  WELCOME!  ");  
 lcd.setCursor (0,1);  
 lcd.print("Slot Left: ");  
 lcd.print(Slot); 
   
 }  
 void time_Measurement()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  period = pulseIn(echo, HIGH);
}

