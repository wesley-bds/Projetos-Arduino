// C++ code
//
int led = 13; // Define o pino do LED

void setup()
{
  pinMode(led, OUTPUT); // Configura o pino como saída
}

void loop()
{
  digitalWrite(led, HIGH); // Acende o LED
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led, LOW); // Apaga o LED
  delay(1000); // Wait for 1000 millisecond(s)
}