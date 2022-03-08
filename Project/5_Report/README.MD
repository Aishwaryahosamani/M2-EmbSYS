
# Identifying features

1. Ultrasonic Sensors are provided for easy detection of empty slots of .
2. LCD to be used to see the status of the availability of parking slots.
3. Servo motors for simulation as gate opener motors.


# State of art/Research

Car parking is a huge issue in today's congested cities, as the number of automobiles increases. In congested and densely populated urban areas, 
the unavailability of parking spots is growing severe, so car parking is a major concern. As a result, effective parking management systems are required.

# Requirements

## High Level Requirements

 |   ID          |Description                         | 
 |--------------------|------------------------------------|
 |HLR01      |The  shall sense the availabilty of empty slots   |
 |HLR02   |The system  shall able to open and close the gate  |
 |HLR03   |Shall be able to display the status of availability    | 
 |HLR04   | shall be able to allow new cars |
 
 
 ## Low Level Requirements
 
  |   ID           |Description                         | 
 |--------------------|------------------------------------|
 |LLR01   | Ultra sonic Sensors are used to sense the availabity of empty slots    |
 |LLR02     | The system shall use servo motor to open and close the gate    |
 |LLR03  |On a 162 LCD, visitors may observe the status of the available free parking space outside the parking lot.      | 
 |LLR04  |When the slots are empty it shall be able to allow new cars   |
 
 # SWOT Analysis
 
 ![image](https://user-images.githubusercontent.com/46986941/157201436-8a87c191-856b-4293-97c6-9b1914db4607.png)
 
 # 5W's and 1H
 

![Screenshot (7)](https://user-images.githubusercontent.com/46986941/157120332-243aa678-da70-4ba0-a4f4-2d7f63397d92.png)
       
  
# Applications

  Useful wherever parking is available like;
 
 Airports
 
 Bus stops
 
 Railway stations
 
 School and collages  etc...
 
 # Description

  Automatic car parking system is capable of automatically locating open parking spaces that are empty. New vehicles are allowed to enter the automated car parking if there is an empty slot.# Block Diagram of Car Parking System.

# Block Diagram Of Automatic Car Parking System

![image](https://user-images.githubusercontent.com/46986941/157232208-0ab2dbce-ea7f-432d-8833-416b969d58fd.png)


 
## Components

* Arduino Uno
     
     All sensors,motors and peripherals are interfaced witH Arduino Uno. Arduino senses the data and sends commands to  LCD and Motors

* Ultrasonic Sensor
     
     Ultra sonic Sensors are used to sense the availabity of empty slots    
 
* Servo Motor
     
     The system shall use servo motor to open and close the gate  
     
 * LCD Display
      
      On LCD, visitors may observe the status of the available free parking space outside the parking lot.
      
## UML DIAGRAMS

# Behaviroal diagram
 
 Flow chart 
 
 ![FC](https://user-images.githubusercontent.com/46986941/155737384-518a18c2-7dc2-4f59-b2ca-58a97f4ef034.png)
 
 # Structural diagram
 
 Use case diagram
 
 ![use case car uml](https://user-images.githubusercontent.com/46986941/155785299-f733ab82-3433-450a-a7bf-a4e42c9781a8.png)
 
 # Test Plan

|Test ID   |Test Case objective  |Input data   |Expected output   |
|----------|---------------------|-------------------|---------------------------------|
|TC-01     |If car arrives      |car |sensor should sense that car has arrived| 
|TC_02   |IF car is present |Sensor input| check the availability of empty slots |
|TC_03   |If there is empty slot  | servo motor input  | open the gate |
|TC_04|No empty slots |servo motor |Block the gate|
|TC_05|open /close the gate| servo motor |Display on LCD |

# Before car arrives the LCD will be displaying as parking system

![image](https://user-images.githubusercontent.com/46986941/157209799-98ce6946-449b-42c5-9836-26c74058fe00.png)

# When the car arrives the sensor detects that only one slot is empty and the gate is opened

![image](https://user-images.githubusercontent.com/46986941/157210939-62d814b1-3544-4d80-b12f-2e39ab0eceb2.png)


# When there are no empty slots the sensor detects that no empty slots and gate is closed 

![image](https://user-images.githubusercontent.com/46986941/157209210-c945fe0e-45e2-4117-959b-c9a9a8d09978.png)




