void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  int value = analogRead(A0);
  if (value<200){
    digitalWrite(LED_BUILTIN,LOW);
  }
  else{
    digitalWrite(LED_BUILTIN,HIGH);
  }
  Serial.println(value);
  delay(500);

}
