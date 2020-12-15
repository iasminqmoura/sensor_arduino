const int analogPin[4] = {A0, A1, A2, A3};
const int digitalPin[4] = {5, 4, 3, 2};

void setup() {
  for (int i = 0; i<4; ++i){
    pinMode(digitalPin[i], OUTPUT); 
  }
  Serial.begin(115200);
}

void loop() {

 //Linha = Digitais // Coluna = Analógico
  for (int iLinha = 0; iLinha<4; ++iLinha){
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

    digitalWrite(digitalPin[iLinha], HIGH);

    for (int iColuna = 0; iColuna < 4; ++iColuna){
      int sensorValue = 0;
      int outputValue = 0;
      
      sensorValue = analogRead(analogPin[iColuna]);
      outputValue = map(sensorValue, 0, 1023, 0, 255);
      Serial.print("sensor_");
      Serial.print(iLinha);
      Serial.print("_");
      Serial.print(iColuna);
      Serial.print(" = ");
      Serial.print(outputValue);
      Serial.print(" ");
      
    }
  }

  Serial.println();

  delay(2);
}
