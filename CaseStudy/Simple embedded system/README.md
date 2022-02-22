## Alarm Clock

![alarm clock](https://user-images.githubusercontent.com/46986941/154856041-2beabaed-e09e-44d3-b791-180decfb88a3.png)

The architecture of a  Arduino Alarm Clock includes elements like :

1.Arduino Uno

2.DS 1307 RTC Module

3.Push Buttons

4.LCD Display

5.Buzzer

6.Battery

# Block Diagram explanation;

DS 1307: Used for clock and calender. The clock function provides seconds,minutes and hours. Calender function provides day,month and year values.

LCD: Used to display the clock.

Push Buttons:Used to set alarm.

Buzzer: Acts as an alarm.

Battery: Measure timer even when there is no external power or the micro controller is reprogrammed. 

# Requirements:

## High level requirements:

                                                             

* HR01           :                         Even when there is no external power, RTC can be used to measure time.
  
* HR02           :
                        Displays clock and calender with all of the functions for  keeping track of time.

* HR03           :                       Displays the accurate time and date,as well as  an alarm.

* HR04           :                       In the event of power outage, RTC can immediately switch to the backup source. 



## Low level requirements:


                                                          

* LR01               :This is a battery powered clock that keeps  time even when the microcontroller is reprogrammed if there is no external power. 

* LR02               :                RTC displays The clock and calender  are displayed using RTC which is powered by  a separate battery that is  one  is not connected to the                                       main supply.

* LR03               :               RTC displays correct time and date, as well as an alarm feature.

* LR04               :                When there is a power outage, the 3V backup is attached to rtc, allowing the IC can immediately switch to backup source. 

#  V design model
 
 ![alarm clock 1](https://user-images.githubusercontent.com/46986941/154856036-f6ebdf18-72e4-4ea0-a56a-3bab050aafc3.png)

# Applications 

* Data recording applications 

* Time stamps

* Alarms

* Timers

* Clock builders all benefit from real-time clocks.



  
