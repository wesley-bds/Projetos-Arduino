#include <Servo.h> 

const int pinoServo = 6;  // Define o pino digital 6 para conexão do sinal do servo
Servo servo; // Cria um objeto do tipo Servo
int pos; // Variável para armazenar a posição atual do servo

void setup()
{
  servo.attach(pinoServo); // Associa o pino digital 6 ao objeto servo
  servo.write(0); // Move o servo para a posição 0° ao iniciar
}

void loop()
{
  // Movimento do servo de 0° até 180°
  for (pos = 0; pos < 180; pos++) {
    servo.write(pos); // Envia o ângulo desejado para o servo
    delay(15);// Aguarda 15 ms para o servo se mover
  }

  delay(1000); // Espera 1 segundo antes de começar o movimento de volta

  // Movimento do servo de 180° até 0°
  for (pos = 180; pos >= 0; pos--) {
    servo.write(pos);  
    delay(15);
  }
}
