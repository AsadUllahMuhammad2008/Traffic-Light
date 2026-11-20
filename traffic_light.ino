// Arduino pins connected to the traffic-light LEDs.
const int GREEN = 4;
const int YELLOW = 2;
const int RED = 3;

void setup() {
  // Initialize serial communication at 9600 baud rate
  Serial.begin(9600);

  // Set each LED pin as an output.
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop() {
  // Turn on the red LED and turn the other LEDs off.
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, HIGH);
  // Print the String on the console for guidance
  Serial.println("Now the signal is RED. Please STOP");
  delay(5000);  // Keep the red light on for 5 seconds.

  // Turn on the yellow LED and turn the other LEDs off.
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  digitalWrite(RED, LOW);
  // Print the String on the console for guidance
  Serial.println("Now the signal is YELLOW. Please BE READY");
  delay(2000);  // Keep the yellow light on for 2 seconds.

  // Turn on the green LED and turn the other LEDs off.
  digitalWrite(GREEN, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);
  // Print the String on the console for guidance
  Serial.println("Now the signal is GREEN. You can GO!");
  delay(5000);  // Keep the green light on for 5 seconds.

}
