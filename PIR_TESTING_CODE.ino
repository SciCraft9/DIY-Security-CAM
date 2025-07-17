// Define PIR sensor pin
const int pirPin = 2;       // Connect PIR sensor OUT pin to digital pin 2
const int ledPin = 13;      // Onboard LED pin

void setup() {
  pinMode(pirPin, INPUT);   // PIR sensor as input
  pinMode(ledPin, OUTPUT);  // LED as output
  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(pirPin);  // Read PIR sensor

  if (motion == HIGH) {
    digitalWrite(ledPin, HIGH);      // Turn on LED
    Serial.println("Motion detected!");
  } else {
    digitalWrite(ledPin, LOW);       // Turn off LED
  }

  delay(100); // Small delay for stability
}
