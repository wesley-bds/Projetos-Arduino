# Projeto Servo Motor com Arduino

Este projeto demonstra o controle de um servo motor utilizando Arduino. O motor realiza um movimento oscilante de 0° a 180° e depois retorna de 180° a 0°, com um pequeno atraso entre os movimentos para suavizar a rotação.

## 📌 Objetivo

Fazer o servo motor realizar um ciclo completo de ida e volta, permitindo compreender o controle de posição usando a biblioteca `Servo.h` do Arduino.

## 🛠 Materiais Utilizados

- 1 Arduino Uno (ou similar)
- 1 Servo motor (como SG90)
- Jumpers (cabos macho/macho)
- Protoboard (opcional)
- Fonte de alimentação 5V (pode ser a do próprio Arduino via USB)

## 🔌 Esquema de Ligação

| Servo Motor | Arduino       |
|-------------|----------------|
| Sinal       | Pino Digital 6 |
| VCC         | 5V             |
| GND         | GND            |

## 🧠 Lógica do Código

1. Inicializa o servo no pino 6 e o posiciona em 0°.
2. Move de 0° até 180° com atraso de 15 ms entre cada grau.
3. Espera 1 segundo.
4. Move de volta de 180° até 0°, também com atraso de 15 ms entre cada grau.
5. Repete o processo indefinidamente.
