// C++ code
//

const byte RED = 9;
const byte BLUE = 10;
const byte GREEN = 11;

void setup (){
  pinMode (RED, OUTPUT);
  pinMode (BLUE, OUTPUT);
  pinMode (GREEN, OUTPUT);
}

//void loop(){
  //analogWrite (RED, 255);
  //analogWrite (BLUE, 0);
 // analogWrite (GREEN, 0);
//}
void loop(){
  analogWrite (RED,random(256));
  analogWrite (BLUE,random (256));
  analogWrite (GREEN,random(256));
  delay(700);
}
  
  