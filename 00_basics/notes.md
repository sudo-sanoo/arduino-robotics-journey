# A. Blink (blink.ino)
Blink LED with Delay + Serial Output

## 1. Objective
- Repeatedly turn onboard LED on/off every 3 seconds.
- Learn `setup()`, `loop()`, `pinMode()`, `digitalWrite()`, `delay()`, and `Serial`.

## 2. Hardware
Board: Arduino Uno R3  
External components used: None (LED_BUILTIN)  
Pin used: LED_BUILTIN → Digital Pin 13 (Uno)

**!! Safety Notes**
- No external circuitry = safe.
- If using external LED → always use a resistor (220 Ohms – 1k Ohms) to avoid burning LED or board.

## 3. Key Concepts Learned
- Difference between `setup()` and `loop()`
- Digital Output HIGH / LOW
- Delay timing in milliseconds
- Serial Monitor basics
- Infinite loop using `while(1)` to stop execution

#### Refer to `blink.md` for detailed explanation of concepts

---