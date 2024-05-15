/*
  Autor: João Carlos de Souza Filho / 2024

  Este algoritmo tem como objetivo realizar a escrita dos 4 LEDs,
  LED RGB e relé.

  IMPORTANTE:
  De acordo com o diagrama esquemático, os LEDs D1, D2, D3 e D4
  acionarão quando o microcontrolador enviar nivel lógico '1'.
  Já o LED RGB, por ser Anodo Comum, acionará ao receber nível lógico '0'.
  Já o relé, acionará ao receber nível lógico '1'.

  O DIP Switch SW5 do pino correspondente precisa estar na posição ON para que
  o LED funcione.
  Ex. Para utilizar o LED D2, a posição '2' do DIP Switch precisa estar ON.

  Ao utilizar um pino como LED, significa que o botão correspondente não poderá
  ser utilizado simultaneamente.
  Ex. Para utilizar o LED D3, significa que o botão SW3 não pode ser utilizado.
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

byte output_pins[] = {LED1, LED2, LED3, LED4, RGB_RED, RGB_GREEN, RGB_BLUE, RELE};

// Essa função é executada apenas uma vez ao iniciar o algoritmo, antes do loop
void setup() {
  Serial.begin(115200);

  for(int i = 0; i <= sizeof(output_pins); i++){
    pinMode(output_pins[i], OUTPUT);
  }

  digitalWrite(RGB_RED,   HIGH);
  digitalWrite(RGB_GREEN, HIGH);
  digitalWrite(RGB_BLUE,  HIGH);
}

// Essa função repetirá indefinidamente
void loop() {
  digitalWrite(LED1, HIGH);
  delay(1000);                    
  digitalWrite(LED1, LOW);
  delay(1000);   
  digitalWrite(LED2, HIGH);
  delay(1000);                    
  digitalWrite(LED2, LOW);
  delay(1000);   
  digitalWrite(LED3, HIGH); 
  delay(1000);                    
  digitalWrite(LED3, LOW);
  delay(1000);   
  digitalWrite(LED4, HIGH); 
  delay(1000);                    
  digitalWrite(LED4, LOW);
  delay(1000); 
  digitalWrite(RGB_RED, LOW);
  delay(1000);                    
  digitalWrite(RGB_RED, HIGH);
  delay(1000);   
  digitalWrite(RGB_GREEN, LOW); 
  delay(1000);                    
  digitalWrite(RGB_GREEN, HIGH);
  delay(1000);   
  digitalWrite(RGB_BLUE, LOW); 
  delay(1000);                    
  digitalWrite(RGB_BLUE, HIGH);
  delay(1000); 
  digitalWrite(RELE, HIGH); 
  delay(1000);                    
  digitalWrite(RELE, LOW);
  delay(1000);  
}
