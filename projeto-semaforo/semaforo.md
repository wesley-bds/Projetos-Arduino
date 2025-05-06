# Semáforo Sequencial

Simula a lógica de um semáforo comum com LEDs que acendem em sequência: vermelho, amarelo e verde.

**Componentes:**
- LEDs:
  - Vermelho: pino 8
  - Amarelo: pino 9
  - Verde: pino 10
- Resistores: 220Ω para cada LED

**Funcionamento:**
- O LED vermelho (pino 8) acende por 5 segundos.
- Depois, o LED amarelo (pino 9) acende por 5 segundos.
- Em seguida, o LED verde (pino 10) acende por 3 segundos.
- Após cada LED aceso, ele é desligado com um pequeno intervalo de 1 segundo antes do próximo acender.
