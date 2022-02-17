# Air-Conditiong System

![AC](https://user-images.githubusercontent.com/46986941/154539565-1f8ef52a-65c7-4425-9fb1-79d4064c503f.png)

The architecture of the Airconditioner includes

1.Beagle Bone Black

2.LCD display

3.Image processing technique

4.USD

5.Humidity Sensor

6.Temperature Sensor

7.Video Camera

Block Diagram Explanation.

*The beagle bone black is the block which processes the entire system where the sensors, drivers, web cam and the SD card is connected to the ports available in the beagle bone board.

*A camera is fixed to capture images of the room which is con-nected to the beagle bone via USB. 

The image data captured by the camera is sent to the beagle bone and is processed using image processing technique via Open CV.

*The data obtained is video live streamed and then this streamed data is converted to a number of frames where each frame is a data image.

Each image is processed separately by running the face identifica-tion algorithm.

*The image processing by the face detection is done here by the method of Haarcascade face detection tech-nique Open CV. 

*This process calculates the count or density of people for the control of Air-conditioner. 

*The L293D Driver is used to control the speed of Air-conditioner.

*The humidity sensor SY-HS-220 gives the moisture content density and the LM35 pre-cision centigrade temperature sensor gives temperature of the

room.

*The output of both the sensors are analog in nature where it is converted to digital form by processing it at the beagle bone. The temperature is then checked and the speed of the air conditioner is controlled accordingly. The information at each instant is written to the sand-disk (SD) card for future reference. The SD card is inserted to the slot given in the bea-gle bone .The LCD displays the current humidity, temperature and density of people.
