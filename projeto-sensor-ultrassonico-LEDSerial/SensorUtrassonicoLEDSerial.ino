int distancia = 0;

long readUltrasonicDistance(int triggerPin, int echoPin) {
  pinMode(triggerPin, OUTPUT);  
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}

void setup() {
  pinMode(13, OUTPUT); // LED vermelho
  pinMode(5, OUTPUT);  // LED verde
  Serial.begin(9600);  // Para monitorar a distância (opcional)
}

void loop() {
  distancia = 0.01723 * readUltrasonicDistance(11, 10);

  Serial.print("Distância: ");
  Serial.print(distancia);
  Serial.println(" cm");

  if (distancia <= 50) {
    digitalWrite(13, HIGH);  // Vermelho aceso
    digitalWrite(5, LOW);    // Verde apagado
  } else {
    digitalWrite(13, LOW);   // Vermelho apagado
    digitalWrite(5, HIGH);   // Verde aceso
  }

  delay(500); // Pequena pausa para leitura estável
}
