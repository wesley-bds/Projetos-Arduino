// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(2, INPUT);
 
}

void loop()
{
  	digitalWrite(10, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  	digitalWrite(12, LOW);
  delay(2000); // Wait for 1000 millisecond(s)
  	digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
	
  	digitalWrite(7, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
	digitalWrite(6, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  if (digitalRead(2) == 0) {
  	digitalWrite(10, LOW);
    digitalWrite(12, HIGH);
    delay(3000);
    
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    delay(7000);
    
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(13, LOW);
    digitalWrite(10, HIGH);
  }


}