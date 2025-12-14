void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  for(int i =0;i<3;i++){
      digitalWrite(LED_BUILTIN, LOW);
      delay(1000);
      digitalWrite(LED_BUILTIN, HIGH);
      delay(2000);
      Serial.print(i+1);
      Serial.println(" lan");
  }
}

void loop() {

  
}
