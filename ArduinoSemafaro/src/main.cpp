#include <Arduino.h>

int RED=3;      // LED vermelho 11
int YELLOW=4;   // LED amarelo 12
int GREEN=2;    // LED verde 13

int time_RED = 5000;      // 5 SEGUNDOS
int time_YELLOW = 1500;   // 1,5 SEGUNDOS
int time_GREEN = 2000;    // 2 SEGUNDOS

int time_transicao = 200; // 0,2 SEGUNDOS PARA MUDAR O LED



void setup() {
  pinMode(RED,OUTPUT);      // PINAGEM A SER UTILIZADA PARA O LED VERMELHO
  pinMode(YELLOW,OUTPUT);   // PINAGEM A SER UTILIZADA PARA O LED AMARELO
  pinMode(GREEN,OUTPUT);    // PINAGEM A SER UTILIZADA PARA O LED VERDE
}

void loop() {

 //--------LED GREEN------------
 digitalWrite(GREEN,HIGH);    // LIGAR O LED VERDE
 delay(time_GREEN);         
 digitalWrite(GREEN,LOW);     // DESLIGAR O LED VERDE
 delay(time_transicao);
 
 //--------LED YELLOW-----------
 digitalWrite(YELLOW,HIGH);   // LIGAR O LED AMARELO
 delay(time_YELLOW);            
 digitalWrite(YELLOW,LOW);    // DESLIGAR O LED AMARELO
 delay(time_transicao);          
         
  //---------LED RED-------------
 digitalWrite(RED,HIGH);      // LIGAR O LED VERMELHO
 delay(time_RED);            
 digitalWrite(RED,LOW);       // DESLIGAR O LED VERMELHO
 delay(time_transicao);     

}