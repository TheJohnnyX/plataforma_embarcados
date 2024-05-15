/*
  Autor: João Carlos de Souza Filho / 2024

  Este algoritmo tem como objetivo realizar a leitura analógica do
  potenciômetro e escrever no monitor serial da IDE o resultado da leitura.

  IMPORTANTE:
  De acordo com o circuito no diagrama esquemático, ao girar o potenciômetro
  no sentido horário, o valor da leitura analógica será maior. Ao girar o
  potênciometro no sentido anti-horário, o valor será menor.
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

byte display_pins[] = {A, B, C, D, E, F, G, DP, DISPLAY1, DISPLAY2};

void setDigit(int flag)
{
  for(int i = 0; i < 8; i++)
  {
    digitalWrite(display_pins[i],segNum[flag][i]);
  }
}

// Essa função é executada apenas uma vez ao iniciar o algoritmo, antes do loop
void setup() {
  Serial.begin(115200);

  for(int i = 0; i <= sizeof(display_pins); i++){
    pinMode(display_pins[i], OUTPUT);
  }
}

// Essa função repetirá indefinidamente
void loop() {
  int reading = analogRead(POTENCIOMETRO);
  Serial.print("Leitura: ");
  Serial.println(reading);
  delay(500);
}