/* BlinkGreenM7.ino
   MIT License (c) Faure Systems <dev at faure dot systems>

   LL_RCC_ForceCM4Boot() must be called in M7 sketch to start M4 sketch

   Ref: https://www.arduino.cc/pro/tutorials/portenta-h7/por-ard-dcp
*/

// the setup function runs once when you press reset or power the board
void setup() {
  LL_RCC_ForceCM4Boot();
  // initialize digital pin LEDR as an output.
  pinMode(LEDG, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LEDG, LOW); // turn the red LED on (LOW is the voltage level)
  delay(450); // wait for 200 milliseconds
  digitalWrite(LEDG, HIGH); // turn the LED off by making the voltage HIGH
  delay(450); // wait for 200 milliseconds
}
