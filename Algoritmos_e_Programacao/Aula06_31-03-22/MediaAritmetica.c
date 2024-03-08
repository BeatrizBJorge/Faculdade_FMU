/*
Escreva um algoritmo que receba duas notas de um aluno e
calcule e imprima o valor da sua média aritmética e se está
aprovado, reprovado e ou de exame.

Critério de aprovação: >=7
Critério para exame: >=3 e <7
Critério de reprovação: >=0 e <3
*/
#include<stdio.h>

float n1, n2, med;

int main(){
  printf("Digite as notas\n");
  scanf("%f %f", &n1, &n2);

  med=(n1+n2)/2;

  if(med>=7 && med<=10){
    printf("\nAprovado com media %.2f\n",med);
  }
  else if(med>=3 && med<7){
    printf("\nExame com media %.2f\n",med);
  }
  else if(med>=0 && med<3){
    printf("\nReprovado com media %.2f\n",med);
  }
  else{
    printf("\nNota invalida\n");
  }

  return 0;
}
