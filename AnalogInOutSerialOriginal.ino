/*
  Analog input, analog output, serial output

  Reads an analog input pin, maps the result to a range from 0 to 255 and uses
  the result to set the pulse width modulation (PWM) of an output pin.
  Also prints the results to the Serial Monitor.

  The circuit:
  - potentiometer connected to analog pin 0.
    Center pin of the potentiometer goes to the analog pin.
    side pins of the potentiometer go to +5V and ground
  - LED connected from digital pin 9 to ground

  created 29 Dec. 2008
  modified 9 Apr 2012
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogInOutSerial
*/

// These constants won't change. They're used to give names to the pins used:
const int analogPin[4] = {A0, A1, A2, A3};
const int digitalPin[4] = {5, 4, 3, 2};

int sensorValue = 0;
int outputValue = 0;

int sensorValue2 = 0;
int outputValue2 = 0;

void setup() {
  pinMode(analogPin[4], OUTPUT);

  Serial.begin(115200);
}

void loop() {
  digitalWrite(2, 0);
  digitalWrite(3, 1);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  
  sensorValue = analogRead(A0);
  outputValue = map(sensorValue, 0, 1023, 0, 255);

  sensorValue2 = analogRead(A1);
  outputValue2 = map(sensorValue2, 0, 1023, 0, 255);
  
  Serial.print("sensor1 = ");
  Serial.print(sensorValue);

  Serial.print(",");
  
  Serial.print("sensor2 = ");
  Serial.println(sensorValue2);
  
  delay(2);
}
