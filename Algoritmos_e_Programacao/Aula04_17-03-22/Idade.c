/*
Escreva um algoritmo para ler o número total de
eleitores de um município, o número de votos
brancos, nulos e válidos. Calcular e imprimir o
percentual que cada um representa em relação ao
total de eleitores.

Fórmula: total_e - 100 %
votos_B - Pb %

Pb= (votos_B*100)/total_e
*/
#include<stdio.h>

int idade;

int main(){
  printf("Digite sua idade\n");
  scanf("%d", &idade);

  //estrutura de condição composta
  if(idade>=18){
    printf("Voce e maior de idade - %d anos\n", idade);
  }
  else{
    printf("Voce e menor de idade - %d anos\n", idade);
  }

  return 0;
}
