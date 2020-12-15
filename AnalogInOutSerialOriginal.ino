const int analogPin[4] = {A0, A1, A2, A3};
const int digitalPin[4] = {5, 4, 3, 2};

int sensorValue = 0;
int outputValue = 0;

/*int sensorValue2 = 0;
int outputValue2 = 0;*/

void setup() {
  pinMode(analogPin[4], OUTPUT);
  Serial.begin(115200); 
}

void loop() {
  /*digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);*/
  for (int i = 0; i<4; ++i){
    if (digitalPin[i] == HIGH){
      digitalWrite(digitalPin[i], LOW);
    }
    else{
      digitalWrite(digitalPin[i], HIGH);
    }
  }
  
  /*sensorValue = analogRead(A0);
  outputValue = map(sensorValue, 0, 1023, 0, 255);

  sensorValue2 = analogRead(A1);
  outputValue2 = map(sensorValue2, 0, 1023, 0, 255);
  
  Serial.print("sensor1 = ");
  Serial.print(sensorValue);*/

  /*Serial.print(",");
  
  Serial.print("sensor2 = ");
  Serial.println(sensorValue);*/

  for (int i = 0; i<4; ++i){
    sensorValue = analogRead(analogPin[i]);
    outputValue = map(sensorValue, 0, 1023, 0, 255);
  }
  
   Serial.print("sensor = ");
   Serial.print(sensorValue);
   
  delay(2);
}
