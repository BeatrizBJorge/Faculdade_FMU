/*
Faça um algoritmo que receba dois números real 
e calcule e imprima a soma, subtração, multiplicação e divisão.
Operações Aritméticas: + - * /
*/
#include<stdio.h>

float n1, n2;

int main(){
  printf("Digite o numero 1\n");
  scanf("%f", &n1);

  printf("Digite o numero 2 - nao use o numero 0\n");
  scanf("%f", &n2);

  printf("\nSoma %.2f\n", n1+n2);
  printf("\nSubtração %.2f\n", n1-n2);
  printf("\nMultiplicação %.2f\n", n1*n2);
  printf("\nDivisão %.2f\n", n1/n2);

  return 0;
}
