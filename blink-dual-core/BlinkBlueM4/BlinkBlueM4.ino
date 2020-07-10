/* BlinkBlueM4.ino
   MIT License (c) Faure Systems <dev at faure dot systems>

   LL_RCC_ForceCM4Boot() must be called in M7 sketch to start M4 sketch

   Ref: https://www.arduino.cc/pro/tutorials/portenta-h7/por-ard-dcp
*/

// the setup function runs once when you press reset or power the board
void setup() {
    // initialize digital pin LEDR as an output.
    pinMode(LEDB, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
   digitalWrite(LEDB, LOW); // turn the red LED on (LOW is the voltage level)
   delay(200); // wait for 200 milliseconds
   digitalWrite(LEDB, HIGH); // turn the LED off by making the voltage HIGH
   delay(200); // wait for 200 milliseconds
}
