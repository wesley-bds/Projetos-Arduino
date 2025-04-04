### Sensor Ultrassônico Pino Unico

Este projeto utiliza um sensor ultrassônico para medir a distância e acende LEDs com base no resultado.

**Componentes:**
- Sensor Ultrassônico HC-SR04  
  - Trigger: pino 8  
  - Echo: pino 8 (idealmente deveriam ser pinos separados)
- LED vermelho: pino 13  
- LED verde: pino 10
- Resistores: 220Ω para cada LED

**Funcionamento:**
- Se a distância detectada for menor ou igual a 50 cm, o LED vermelho (pino 13) acende e o LED verde (pino 10) apaga.
- Se a distância for maior que 50 cm, o LED verde acende e o vermelho apaga.
- A distância é medida em tempo real com um pequeno delay para estabilidade.

**Observações:**
- O uso do mesmo pino (8) para Trigger e Echo não é padrão e pode causar imprecisão. Recomenda-se usar pinos separados para maior confiabilidade.

