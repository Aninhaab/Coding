// C++ code
//
void setup()
{
  pinMode(4,OUTPUT);
}

void loop()
{
  digitalWrite(4, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(4, LOW);
  delay(500); // Wait for 500 millisecond(s)
  
}
