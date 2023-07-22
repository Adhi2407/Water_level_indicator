// Liquid Sensor and LED interfacing

// Pin assignments
const int sensorPin = A0;  // Analog pin for sensor input
const int ledPin = 2;     // Digital pin for LED output

// Threshold for liquid detection (adjust as needed)
const int liquidThreshold = 500;  // Change this value according to your requirements

void setup() {
  pinMode(ledPin, OUTPUT);  // Set LED pin as output
  Serial.begin(9600);       // Initialize serial communication for debugging (optional)
}

void loop() {
  int liquidLevel = analogRead(sensorPin);  // Read analog value from sensor

  Serial.print("Liquid Level: ");
  Serial.println(liquidLevel);  // Print liquid level value (optional)

  if (liquidLevel > liquidThreshold) {
    digitalWrite(ledPin, HIGH);  // Turn on LED if liquid is detected
  } else {
    digitalWrite(ledPin, LOW);   // Turn off LED if no liquid is detected
  }

  delay(1000);  // Delay for stability, adjust as needed
}
