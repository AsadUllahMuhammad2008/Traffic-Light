# Arduino Traffic Light Controller
A simple traffic-light simulation built with an Arduino Uno and
three LEDs. The program cycles through RED → YELLOW → GREEN, while
sending a status message to the Serial Monitor.
## Project Overview
This beginner-friendly project demonstrates: - Configuring Arduino
digital pins as outputs. - Controlling LEDs with digitalWrite(). -
Using delay() to control signal timing. - Sending status messages
through serial communication.
### Note: 
This is an educational tabletop demonstration only. It is
not suitable for controlling real road traffic or safety-critical
equipment.

## Components Required
- Arduino Uno
- Red LED
- Yellow LED
- Green LED
- 3 × current-limiting resistors (typically 220 Ω to 330 Ω)
- Breadboard
- Jumper wires
- USB cable
## Wiring
Connect each LED in series with its own current-limiting resistor:

- LED        Arduino pin
- Green               D4
- Yellow              D2
- Red                 D3

For each LED, connect the Arduino output pin to the LED anode (long leg)
through a resistor. Connect the LED cathode (short leg) to GND. Check
LED polarity before powering the circuit.
## Signal Sequence
- Step     Red (D3)   Yellow (D2)   Green (D4)      Duration
- RED      ON         OFF           OFF            5 seconds
- YELLOW   OFF        ON            OFF            2 seconds
- GREEN    OFF        OFF           ON             5 seconds

The sequence repeats continuously.
## How to Run
1. Assemble the circuit using the wiring table above.
2. Connect the Arduino Uno to your computer using USB.
3. Open the project in the Arduino IDE.
4. Select Arduino Uno under Tools → Board.
5. Select the correct port under Tools → Port.
6. Upload the sketch.
7. Open Tools → Serial Monitor.
8. Set the Serial Monitor baud rate to 9600 baud.
9. Observe the LEDs and the corresponding messages. The cycle repeats
   automatically.
## Serial Monitor Output
The Serial Monitor displays one message at the beginning of each signal
phase:
Now the signal is RED. Please STOP
Now the signal is YELLOW. Please BE READY
Now the signal is GREEN. You can GO!
The messages repeat as the traffic-light sequence runs.
## Timing
- Red: 5,000 ms (5 seconds)
- Yellow: 2,000 ms (2 seconds)
- Green: 5,000 ms (5 seconds)
- Total cycle: 12 seconds, excluding negligible execution overhead.
## Repository Structure
traffic-light/
├── README.md
├── Traffic_Light_Report.pdf
└── traffic_light.ino
## Learning Outcomes
After completing this project, a learner should be able to define
digital output pins, switch LEDs on and off, use delays to create timed
stages, and monitor messages over a serial connection.
## License
Add a license file if you want others to reuse or distribute this
project. For a public GitHub repository, an MIT
License is one common option.
