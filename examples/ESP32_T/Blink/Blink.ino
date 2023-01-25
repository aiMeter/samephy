#include<SamePHY.h>
/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  The LED for the ESP32_T (ESP32 chip on TOP) of the SamePHY board is attached 
  to pin S6 (GPI0 2 ) for more info on the SamePHY board pls visit
  https://www.aimeters.com/

  Created by: Engr Dibia Peter
  Date: 24-jan-2023
  This example code is in the public domain.

  https://github.com/aiMeter/samephy/examples/
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
