
# Projeto Arduino - Exibição de Texto no Display LCD 16x2

Este projeto exibe uma mensagem personalizada em um display LCD 16x2 utilizando um Arduino. A mensagem exibida é sobre o clube de futebol **São Paulo FC**.

## 📌 Objetivo

Demonstrar o uso da biblioteca `LiquidCrystal` para controlar um display LCD 16x2 com Arduino, exibindo texto em duas linhas com temporização.

## 🧰 Materiais utilizados

- 1x Arduino Uno (ou similar)
- 1x Display LCD 16x2 com interface paralela
- 1x Potenciômetro (para ajuste do contraste)
- Jumpers
- Protoboard

## ⚙️ Ligações do LCD

| LCD Pin | Arduino Pin |
|---------|-------------|
| RS      | 12          |
| E       | 11          |
| D4      | 5           |
| D5      | 4           |
| D6      | 3           |
| D7      | 2           |
| VSS     | GND         |
| VDD     | 5V          |
| VO      | Meio do potenciômetro |
| RW      | GND         |
| A (LED+) | 5V         |
| K (LED-) | GND        |

> 💡 O potenciômetro deve ter os terminais conectados ao 5V, GND e VO do LCD, para controle do contraste.


## ▶️ Como usar

1. Monte o circuito conforme o esquema acima.
2. Copie o código para a **Arduino IDE**.
3. Conecte o Arduino ao computador e selecione a placa/porta corretas.
4. Faça o **upload do código**.
5. Veja a mensagem aparecer no LCD!

