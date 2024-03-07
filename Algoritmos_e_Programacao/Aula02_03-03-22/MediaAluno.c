/*
Faça um algoritmo que receba a nota 1 
e a nota 2 do aluno, e calcule e imprima 
a média aritmética do aluno.
*/
#include<stdio.h>

float n1,n2,med;

int main(){

  printf("Digite a nota 1: \n");
  scanf("%f", &n1);

  printf("Digite a nota 2: \n");
  scanf("%f", &n2);

  med=(n1+n2)/2;

  printf("\nA média é: %.2f\n", med);

  return 0;
}
