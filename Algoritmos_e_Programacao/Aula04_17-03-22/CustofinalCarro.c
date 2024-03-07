/*
O custo de um carro novo ao consumidor é a soma do
custo de fábrica com a porcentagem do distribuidor e
dos impostos (aplicados ao custo de fábrica).

Supondo que o percentual do distribuidor seja de 28%
e os impostos de 45%, escrever um algoritmo para ler o
custo de fábrica de um carro, calcular e escrever o
custo final ao consumidor.
*/
#include<stdio.h>

float cf, preco;

int main(){
  printf("Digite o preco do custo de fabrica do carro\n");
  scanf("%f", &cf);

  preco=cf+(cf*0.28)+(cf*0.45);

  printf("\nO preco final do carro e R$ %.2f\n", preco);

  return 0;
}
