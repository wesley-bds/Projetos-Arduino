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
  lcd.setCursor(2, 0);
  
//Envia o texto entre aspas para o LCD.
  lcd.print("SAO PAULO FC");
  
//Envia o texto entre aspas para a segunda linha
  lcd.setCursor(2, 1);
  
  lcd.print("MAIOR CAMPEAO");
  
  delay(5000);
  
}





