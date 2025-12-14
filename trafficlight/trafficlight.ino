// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);//do
  pinMode(12, OUTPUT);//vang
  pinMode(11, OUTPUT);//xanh
}

void loop()
{
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(11, HIGH);
  delay(1000);// Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(1000);
  
}
