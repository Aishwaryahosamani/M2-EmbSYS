
# Identifying features

1. IR Sensors are provided for easy detection of movement of vehicles.
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
 |LLR01   |IR Sensors are used to sense the availabity of empty slots    |
 |LLR02     | the system shall use servo motor to open and close the gate    |
 |LLR03  |On a 162 LCD, visitors may observe the status of the available free parking space outside the parking lot.      | 
 |LLR04  |When the slots are empty it shall be able to allow new cars   |
 
 # SWOT Analysis
 
![swot](https://user-images.githubusercontent.com/46986941/155784371-70128f38-ba4d-4762-8d08-03bac502e99b.png)
 
 # 5W's and 1H
 
 Who
  
  People using their cars
 
 What 
  
  Car parking system
  
 When 
   
   When they want to park their cars
   
 where
 
   In parking areas like bus stops, railway stations
   
 Why
 
  TO avoid clashes and traffic
  
 How
 
  Using sensors and motors
  
  
# Applications

Useful wherever parking is available like;
      
Airports
      
Bus stops
      
Railway stations
     
School and collages  etc...
     
     
  # Description

  Automatic car parking system is capable of automatically locating open parking spaces that are empty. New vehicles are allowed to enter the automated car parking if there is an empty slot.# Block Diagram of Car Parking System.

# Block Diagram Of Automatic Car Parking System

![BlockD](https://user-images.githubusercontent.com/46986941/155737669-f416c3c0-f0d9-4387-9fc9-242f286bc7f0.png)


## Components

* Arduino Uno
     
     All sensors,motors and peripherals are interfaced witH Arduino Uno. Arduino senses the data and sends commands to  LCD and Motors

* IR Sensor
     
     IR Sensors are used to sense the availabity of empty slots    
 
* Servo Motor
     
     The system shall use servo motor to open and close the gate  

* I2C Module
     
     Enables communication between Arduino and LCD 
     
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




