// C++ code
//

//Carrega a biblioteca LiquidCrystal
#include <LiquidCrystal.h>

//Define os pinos que serão utilizados para a ligação do LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);



void setup()
{
  lcd.begin(16,2);
}

void loop()
{
//Limpa a tela
  lcd.clear();
  
//Posiciona o cursor na coluna 3
  lcd.setCursor(6, 0);
  
//Envia o texto entre aspas para o LCD.
  lcd.print("SAO");
  
//Envia o texto entre aspas para a segunda linha
  lcd.setCursor(4, 1);
  
  lcd.print("PAULO FC");
  
  delay(1000);
  

//Rolagem para a esquerda
for (int posicao = 0; posicao < 3; posicao ++)
{
  lcd.scrollDisplayLeft();
  delay(300);
}

//Rolagem para direita
for (int posicao = 0; posicao < 6; posicao ++)
{
	lcd.scrollDisplayRight();
  	delay(300);
}
}






