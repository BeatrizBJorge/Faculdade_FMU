/*
Faça um algoritmo para ler: quantidade atual em estoque,
quantidade máxima em estoque e quantidade mínima em
estoque de um produto.

Calcular e escrever a quantidade média:
quantidade média = (quantidade máxima + quantidade
mínima)/2.

Se a quantidade em estoque for maior ou igual à
quantidade média escrever a mensagem 'Não efetuar
compra', senão escrever a mensagem 'Efetuar compra'.
*/
#include<stdio.h>

int qde,qde_max,qde_min;
float qde_med;

int main(){
  printf("Digite a quantidade atual de produtos em estoque\n");
  scanf("%d",&qde);
  
  printf("Digite a quantidade minima em estoque de um produto\n");
  scanf("%d",&qde_min);
  
  printf("Digite a quantidade maxima em estoque de um produto\n");
  scanf("%d",&qde_max);
  
  qde_med=(qde_min+qde_max)/2;
  
  if(qde>=qde_med){
    printf("\nNão efetuar compra\n");
  }
  else{
    printf("\nEfetuar compra\n");
  }
  return 0;
}
