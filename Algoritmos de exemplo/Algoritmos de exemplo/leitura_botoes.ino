/*
  Autor: João Carlos de Souza Filho / 2024

  Este algoritmo tem como objetivo realizar a leitura digital dos 4 botões
  e escrever no monitor serial da IDE o resultado das leituras.

  IMPORTANTE:
  De acordo com o diagrama esquemático, os botões possuem um resistor de pull-up.
  Ou seja, ao serem pressionados, a leitura digital do pino será '0'.
  Caso não estejam sendo pressionados, a leitura digital do pino será '1'.

  O DIP Switch SW5 do pino correspondente precisa estar na posição OFF para que
  o botão funcione corretamente.
  Ex. Para utilizar o botão SW2, a posição '2' do DIP Switch precisa estar OFF.

  Ao utilizar um pino como botão, significa que o led correspondente não poderá
  ser utilizado simultaneamente.
  Ex. Para utilizar o botão SW3, significa que o LED D3 não pode ser utilizado.
*/

#define LED1 4  
#define LED2 0  
#define LED3 2  
#define LED4 15 
#define BOTAO1 4
#define BOTAO2 0
#define BOTAO3 2
#define BOTAO4 15
#define RGB_RED 25 
#define RGB_GREEN 26 
#define RGB_BLUE 27 
#define RELE 13
#define A 18
#define B 5
#define C 21
#define D 03
#define E 01
#define F 23
#define G 22
#define DP 19
#define DISPLAY1 16
#define DISPLAY2 17
#define DHT11_PIN 33 //VP
#define LDR 39 //VN
#define POTENCIOMETRO 34
#define ULTRASSONIC_TRIG 32
#define ULTRASSONIC_ECHO 35

byte input_pins[] = {BOTAO1, BOTAO2, BOTAO3, BOTAO4};

// Essa função é executada apenas uma vez ao iniciar o algoritmo, antes do loop
void setup() {
  Serial.begin(115200);

  for(int i = 0; i <= sizeof(input_pins); i++){
    pinMode(input_pins[i], INPUT);
  }
}

// Essa função repetirá indefinidamente
void loop() {
  bool botao1 = digitalRead(BOTAO1);
  bool botao2 = digitalRead(BOTAO2);
  bool botao3 = digitalRead(BOTAO3);
  bool botao4 = digitalRead(BOTAO4);

  Serial.println("Botão 1: " + (string)botao1 + " | Botão 2: " + (string)botao2 + " | Botão 3: " + (string)botao3 + " | Botão 4: " + (string)botao4);
  delay(500);
}
