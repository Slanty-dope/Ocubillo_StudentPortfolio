/*
  File: Thermistor_LED_Alert.ino
  Description:
  Reads temperature from an NTC thermistor using the Beta equation.
  When temperature reaches or exceeds the threshold, an LED blinks.
  Blinking can be stopped via Serial command "stop".
*/

#define THERMISTOR_PIN A0
#define LED_PIN 8

// Thermistor and circuit constants
const float SERIES_RESISTOR = 10000.0;   // 10kΩ series resistor
const float BETA = 3950.0;               // Beta value of thermistor
const float ROOM_TEMP = 298.15;          // 25°C in Kelvin
const float TEMP_THRESHOLD = 50.0;       // Threshold temperature in °C

bool isBlinking = false;

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);

  Serial.println("System ready. Monitoring temperature...");
}

void loop() {
  int analogValue = analogRead(THERMISTOR_PIN);

  // Prevent division by zero
  if (analogValue <= 0) {
    analogValue = 1;
  }

  // Calculate thermistor resistance
  float resistance = (1023.0 / analogValue - 1.0) * SERIES_RESISTOR;
  if (resistance <= 0) {
    resistance = 0.0001;
  }

  // Calculate temperature using Beta equation
  float temperatureC =
    (1.0 / (log(resistance / SERIES_RESISTOR) / BETA + (1.0 / ROOM_TEMP))) - 273.15;

  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  // Trigger blinking if threshold is exceeded
  if (temperatureC >= TEMP_THRESHOLD) {
    isBlinking = true;
  }

  // Check for Serial command
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n');
    command.trim();

    if (command.equalsIgnoreCase("stop")) {
      isBlinking = false;
      digitalWrite(LED_PIN, LOW);
      Serial.println("Blinking stopped.");
    }
  }

  // LED behavior
  if (isBlinking) {
    digitalWrite(LED_PIN, HIGH);
    delay(100);
    digitalWrite(LED_PIN, LOW);
    delay(100);
  } else {
    delay(500);
  }
}
