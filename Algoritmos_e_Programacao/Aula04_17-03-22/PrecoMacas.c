/*
As maças custam R$1,30 cada se forem compradas
menos de uma dúzia, e R$1,00 se forem compradas
pelo menos 12. Escreve um programa que leia o
número de maças compradas, calcule e escreva o custo
total da compra.
*/
#include<stdio.h>
#include<locale.h>

int qde;

int main(){
  setlocale(LC_ALL, "Portuguese");

  printf("Quantas maçãs você comprou?\n");
  scanf("%d",&qde);

  if(qde>=12){
    printf("\nO valor total da compra é R$ %.2f\n",qde*1.00);
}
else{
    printf("\nO valor total da compra é R$ %.2f\n",qde*1.30);
}

  return 0;
}
