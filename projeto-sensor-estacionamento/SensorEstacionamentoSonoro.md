# Sensor para Estacionamento Sonoro

## Descrição
Este projeto é um protótipo de sensor para estacionamento em garagem, utilizando um Arduino e um sensor ultrassônico para medir a distância de um carro em relação a um obstáculo. Caso o carro esteja muito próximo, um LED vermelho é aceso e um buzzer é acionado. Se o espaço estiver livre, um LED verde permanece aceso.

## Componentes Necessários
- 1 Arduino (UNO, Mega, etc.)
- 1 Sensor ultrassônico HC-SR04
- 1 LED Verde
- 1 LED Vermelho
- 1 Buzzer Piezoelétrico
- 3 Resistores de 220Ω
- Jumpers e Protoboard

## Esquemático de Ligação
| Componente | Pino do Arduino |
|------------|----------------|
| TRIG do Sensor | 3 |
| ECHO do Sensor | 2 |
| LED Verde | 13 |
| LED Vermelho | 10 |
| Buzzer | 9 |

## Instalação e Uso
1. Conecte os componentes conforme o esquema acima.
2. Carregue o código no Arduino através da IDE do Arduino.
3. Abra o Monitor Serial (9600 baud) para visualizar a leitura da distância.
4. Teste aproximando um objeto do sensor e observe o funcionamento dos LEDs e do buzzer.

## Código
O código principal do projeto está incluído no arquivo `.ino`. Ele realiza as seguintes funções:
- Mede a distância utilizando o sensor HC-SR04.
- Aciona os LEDs de acordo com a distância medida.
- Emite um aviso sonoro se a distância for menor que o limite estabelecido.

## Melhorias Futuras
- Adicionar um display para exibir a distância em tempo real.
- Implementar uma versão com IoT para monitoramento remoto.
- Criar uma versão alimentada por bateria para instalações sem fio.

## Licença
Este projeto é de código aberto e pode ser modificado e distribuído conforme desejado.
