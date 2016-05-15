int led = 12; // pin for external LED

// the setup routine will run once when the Arduino is powerd on
void setup() {
  pinMode(led, OUTPUT); // this sets pin 12 to output signal
}

// the loop routine will run over and over, forever
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off
  delay(1000);               // wait for a second
}
