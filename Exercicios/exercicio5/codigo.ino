// C++ code
//
void setup()
{
  pinMode(2, INPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  int var = digitalRead(2);
  if(var) {
  digitalWrite(5, LOW);
  } else{
  digitalWrite (5, HIGH);
  }
}
