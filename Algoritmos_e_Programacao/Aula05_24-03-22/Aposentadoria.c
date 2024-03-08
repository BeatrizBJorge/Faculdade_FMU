/*
Uma empresa quer verificar se o empregado está qualificado para a
aposentadoria ou não. Para estar em condições, um dos seguintes
requisitos deve ser satisfeito:

- Ter no mínimo 65 anos de idade;
- Ter trabalhado no mínimo 30 anos.
- Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos.

Com base nas informações acimas, construa um programa que leia: a
idade e o tempo de trabalho do funcionário. O programa deverá
imprimir a idade, o tempo de trabalho e a mensagem “Requer
aposentadoria” ou “Não requer aposentadoria”.
*/
#include<stdio.h>

int id;
float t;

int main(){
  printf("Digite sua idade\n");
  scanf("%d", &id);

  printf("Digite seu tempo trabalhado\n");
  scanf("%f", &t);

  if((id<=65) || (t>=30) || ((id>=60) && (t>=25))){
    printf("\nIdade %d, tempo de trabalho %.2f - Requer aposentadoria\n",id,t);
  }
  else{
    printf("\nIdade %d, tempo de trabalho &.2f - Não requer aposentadoria\n",id,t);
  }

  return 0;
}
