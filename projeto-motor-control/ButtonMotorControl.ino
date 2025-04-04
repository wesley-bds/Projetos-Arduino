// Ligando o motor pressionando o botão
// Ligar motor no pino 2 em serie com um resistor de 15 ohms
// para limitar a corrente em 40mA não sobrecarregar o Arduino

const int motorPin = 2;
const int buttonPin = 7;
int buttonState = 0;
int motorState = 0;

void setup(){
  pinMode(buttonPin, INPUT);
  pinMode(motorPin, OUTPUT);
}
  
// apertando para funcionar

void loop(){
	motorState = digitalRead(motorPin);
  	buttonState = digitalRead(buttonPin);
  
  if(buttonState == HIGH){
    while(digitalRead(buttonPin) == HIGH){ delay(100);
   }
    
    if(motorState == LOW){
      digitalWrite(motorPin, HIGH);
    } else {
      digitalWrite(motorPin, LOW);
    }
  }
}
  
  