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

int num, vb, vn, vv;
float pb, pn, pv;

int main(){
  printf("Digite o numero total de eleitores\n");
  scanf("%d", &num);

  printf("Digite o numero de votos brancos\n");
  scanf("%d", &vb);

  printf("Digite o numero de votos nulos\n");
  scanf("%d", &vn);

  printf("Digite o numero de votos validos\n");
  scanf("%d", &vv);

  //operações
  pb=(vb*100)/num;
  pn=(vn*100)/num;
  pv=(vv*100)/num;

  printf("\nPercentual brancos %.2f%%, percentual nulos %.2f%% e percentual validos %.2f%%\n", pb,pn,pv);

  return 0;
}
