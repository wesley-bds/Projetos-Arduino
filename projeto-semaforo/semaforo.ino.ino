// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(8, HIGH);
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
   digitalWrite(9, HIGH);
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(9, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
   digitalWrite(10, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(10, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  
}