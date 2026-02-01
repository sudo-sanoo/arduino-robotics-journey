# Traffic Lights Simulation
Simulate traffic lights behaviour in a prototyping solderless breadboard

## 1. Objectives
The objective of this project is to learn how to:  
1. Flash multiple LEDs.
2. Use the Digital I/O Pins of the Arduino (specifically Pin7, Pin8, Pin9) and the Digital GND pin.
3. Use the breadboard to connect circuits, creating an electric field, and a closed circuit.
4. Use MTM jumper wires (based on wire colour).
5. Use LEDs safely in the prototyping breadboard.
6. Use resistors to resist the amount of current.
7. Create a circuit diagram using Tinkercad.

## 2. Hardware
Components:
1. Arduino UNO R3
2. Breadboard
3. Red, Yellow, Green LEDs
4. 3x 220-Ohms Resistors
5. 3x Black & 3x Red Jumper Wires

## 3. Key Concepts Learned
#### A. The Microcontroller
1. The Arduino UNO R3 digital pins outputs nominally 5V, the ideal operating current for a single pin is 20mA.
2. It is important to never exceed 40mA on any individual pins, this is the threshold where permanent damage occurs.
3. The total current drawn from ALL digital and analog pins combined must NOT exceed 200mA.
#### B. Ohm's Law and Resistors
4. How to apply Ohm's Law to select the correct amount of resistor for a component.
5. Purposes of using resistor.
6. Resistors are color coded to indicate their resistance value.
7. Most resistors contains a helical (spiral) groove; the more "twirls" in this groove, the longer the electrical path and the higher the resistance.
#### C. Breadboard and Jumper Wires
8. Different colour of jumper wires have different use-case.
9. Breadboards are connected by a row of 5 holes, each row is not electrically connected to each other.
10. There is a Power Bus and Ground Bus in each side of the breadboard, used to efficiently distribute its effect across the entire bus and reduce the amount jumper wires or pins needed.
11. You can use a jumper wire to electrically connect the other half of the breadboard, to extend power or signal across the entire board.
12. A red jumper wire is typically used for POWER connections (Voltage at the Common Collector, VCC).
13. A black jumper wire usually denotes GROUND connections (GND).
14. In a breadboard, a closed connection from supply to ground is needed to create a closed circuit.
15. The digital pins from the arduino (Pin7, Pin8, Pin12) outputs voltage, goes through the components in the breadboard, eventually to the ground connections where the black jumper wire will be plugged into the GROUND pin of the Arduino board.
#### D. LEDs (Light-Emitting Diode)
16. LEDs have positive leg (Anode) and negative leg (Cathode), the positive leg is longer than the negative leg. Inside the LED, the negative side have a bulkier metal "anvil".
17. LEDs do not limit their own current, thus highlighting the essential use of a resistor.
18. Different colour LEDs have different Forward Voltage.
#### E. TinkerCad: Circuit Diagram Design
19. Basic Circuit Diagram design with TinkerCad
