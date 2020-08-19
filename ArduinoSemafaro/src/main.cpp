#include <Arduino.h>

int LED_YELLOW=3;      // Pino digital LED Amarelo
int LED_RED=4;         // Pino digital LED Vermelho  
int LED_GREEN=2;       // Pino digital LED Verde

int time_RED = 5000;      // 5 SEGUNDOS
int time_YELLOW = 1500;   // 1,5 SEGUNDOS
int time_GREEN = 2000;    // 2 SEGUNDOS

int time_transicao = 200; // 0,2 SEGUNDOS PARA MUDAR O LED



void setup() {
  pinMode(LED_RED,OUTPUT);      // PINAGEM A SER UTILIZADA PARA O LED VERMELHO
  pinMode(LED_YELLOW,OUTPUT);   // PINAGEM A SER UTILIZADA PARA O LED AMARELO
  pinMode(LED_GREEN,OUTPUT);    // PINAGEM A SER UTILIZADA PARA O LED VERDE
}

void loop() {

 //--------LED GREEN------------
 digitalWrite(LED_GREEN,HIGH);    // LIGAR O LED VERDE
 delay(time_GREEN);         
 digitalWrite(LED_GREEN,LOW);     // DESLIGAR O LED VERDE
 delay(time_transicao);
 
 //--------LED YELLOW-----------
 digitalWrite(LED_YELLOW,HIGH);   // LIGAR O LED AMARELO
 delay(time_YELLOW);            
 digitalWrite(LED_YELLOW,LOW);    // DESLIGAR O LED AMARELO
 delay(time_transicao);          
         
  //---------LED RED-------------
 digitalWrite(LED_RED,HIGH);      // LIGAR O LED VERMELHO
 delay(time_RED);            
 digitalWrite(LED_RED,LOW);       // DESLIGAR O LED VERMELHO
 delay(time_transicao);     

}