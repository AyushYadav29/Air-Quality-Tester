# Air-Quality-Tester

* This was our first project in IoT
* This project uses arduino online simulator (Tinkercad).
* We made an air quality tester to monitor indoor air quality .

## Components Used:
* Arduino UNO R3
* Bread Board 
* Connecting Wires
* LED (Red and Green)
* Gas Sensor
* Registers (1 kΩ, 4.7 kΩ, 220 Ω and 221 Ω)
* LCD 16 X 2 
* Piezo Buzzer
* Micro Servo

## Working Model:
![GitHub Logo](/images/working.JPG)
## Implementation:
![GitHub Logo](/images/architecture.png)

In the setup input is taken  from the gas sensor and is  compared  to two threshold values (assumed:- 400ppm and 600 ppm)creating three zones:- safe, moderate polluted and critically polluted air.After processing the input the concentration of pollutants is shown on the led panel .Other outputs sites include two led bulbs ,a piezo buzzer as well as an servo meter which are activated according to the input provided by the sensor.

The inclusion of servo motor evolves the setup from an air quality tester to an air quality management system. Here the servo motor is visualized as the regulator of a ventilation outlet of a purification system which controls the air flow of purified air introduced in the premises.




## Software Design:

We specified 2 levels of threat according to the concentration of gases.

### 1. Level 1  (< 400 ppm)
This category comes under acceptable air quality ,no action is needed to purify the air . Following instructions  will be sent.
Pollutant concentration and state is displayed on the led 
* Green Led is turned on.
* Red Led is turned off 
* Piezo buzzer is turned off
* Servo operated on the default value of 30 degrees.

### 2. Level 2 (between 400ppm and 600ppm)
This category comes under moderately polluted air .While it is breathable purification efforts should start .Following instructions will be sent.
* Pollutant concentration and state is displayed on the led
* Green Led is turned off.
* Red Led  is turned on. 
* Piezo buzzer is turned off.
* Servo operated on the modified value of 60 degrees.

### 3. Level 3(above 600ppm)
This category comes under polluted air .Purification attempts should be maximized .Evacuation is advised.Following instructions will be sent.
Pollutant concentration and state is displayed on the led.
* Green Led is turned off.
* Red Led  is turned on. 
* Piezo buzzer is turned on.
* Servo operated on the modified value of 90 degrees to maximise efficiency.

## Project Link: 
The link to the project on Tikercad: https://www.tinkercad.com/things/1QYq1Pu1yLk-air-quality-tester/editel?sharecode=lINmELqjAU1aKOLJ4PAE6iB1JZLHMxkqA-M3Y2LWQeg
