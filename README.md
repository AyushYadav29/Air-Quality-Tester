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

## Working Model:
![GitHub Logo](/images/working.JPG)
## Implementation:
![GitHub Logo](/images/architecture.png)

In the setup input is taken  from the gas sensor and is  compared  to threshold value (assumed:- 400ppm)creating two zones:- safe and polluted air.After processing the input the concentration of pollutants is shown on the led panel .Other outputs sites include two led bulbs ,a piezo buzzer as well.




## Software Design:

We specified 2 levels of threat according to the concentration of gases.

1. Level 1  (< 400 ppm)
This category comes under acceptable air quality ,no action is needed to purify the air . Following instructions  will be sent.
Pollutant concentration and state is displayed on the led 
* Green Led is turned on.
* Red Led is turned off 
* Piezo buzzer is turned off


2. Level 3(above 400ppm)
This category comes under polluted air .Purification attempts should be maximized .Evacuation is advised.Following instructions will be sent.
Pollutant concentration and state is displayed on the led.
* Green Led is turned off.
* Red Led  is turned on. 
* Piezo buzzer is turned on.

## Project Link: 

