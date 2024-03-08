/*
A conversão de graus Fahrenheit para Celsius é obtida
por c=0.56*(f-32). Faça um programa que calcule e
escreva uma tabela de graus Celsius e graus Fahrenheit,
cujos graus variem de 50 a 65 de 1 em 1.
*/
#include<stdio.h>

float c;
int f;

int main(){
  for(f=50;f<=65;f++){c=0.56*(f-32);
    printf("\n%d F equivale a %.2f C\n",f,c);
  }
  return 0;
}
