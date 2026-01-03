# Blink (blink.ino)
Blink LED with Delay + Serial Output

This note provides a detailed explanation and technical breakdown of `blink.ino`.

---

## Board
Arduino Uno R3
Sketch uploaded using Arduino IDE

---

## Code

```cpp
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600); // Initialize serial communication at 9600 bits per second
}

// the loop function runs over and over again forever
void loop() {
  for (int i = 0; i < 10; i++) {
    digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
    delay(3000);                      // wait for 3 seconds
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
    delay(3000);                      // wait for 3 seconds

    // Serial.print() for text and Serial.println() for a new line
    Serial.print("Blinking looped ");
    Serial.print(i+1);
    Serial.println(" times");
  }

  // Put a halt to the never-ending void loop()
  while (1){
    // do nothing
  }
}
```

## What I noticed:
1. 
    ### void loop() is a function that is being executed repeatedly when a sketch is uploaded to the Arduino Uno R3.  
    How the Arduino microcontroller executes code internally (simplified):
    ```cpp
    int main(){
        setup();
        while (1){
            loop();
        }
    }
    ```
    This means:
    - The Arduino microcontroller executes `loop()` in an infinite loop.
    - Even if I have a `return;` statement inside `loop()`, loop() will be called again, nothing stops.
    - So to stop/halt the next `loop()`, simply place my own infinite loop. 


2. 
    ### RX LED (built-in) blinks when Serial Monitor prints.  
    Why?  
    Because data is being transmitted over the USB serial connection, and the RX LED shows receive activity.
    More precisely:
    - Arduino Uno has two LEDs for serial communication
        - TX = "Transmit" (Arduino -> Computer)
        - RX = "Receive" (Computer -> Arduino)  
        
    When I do:
    ```cpp
    Serial.print(...)
    ```
    Arduino is sending bytes to my computer through the USB serial interface, electrically it is UART data transmission.
    On an Arduino Uno:
    - The main ATmega328 chip does not directly talk USB.
    - A secondary USB-to-Serial chip (ATmega16U2 or CH340 on clones) handles communication.
    - ATmega16U2 or CH340 toggles TX/RX LEDs whenever data flows.
    In summary, RX LED blinking means there is a serial communication activity occuring between Arduino and my computer.

    ## Key Insights
    1. In embedded systems like Arduino:
        - There is no operating system
        - There is no "program exit"
        - Hardware continues running as long as power is supplied

    2. What engineers preferred:
        - Explicit infinite loops to have the CPU running that loop constantly, never stopping
        - Prevent accidental re-running of logic
        - Avoid undefined states

    #### For safety-sensitive robotics or electronics, this prevents motors, relays, or outputs from repeatedly toggling and possibly damaging hardware.