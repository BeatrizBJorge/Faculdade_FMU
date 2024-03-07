/*
Faça um algoritmo para ler um número e verificar se o
número é positivo, se for imprime ao usuário:
“O número é positvo”.
*/
#include<stdio.h>
#include<locale.h> //biblioteca para idiomas

float n;

int main(){
  setlocale(LC_ALL, "Portuguese"); //gramatica do portugues

  printf("Digite um número\n");
  scanf("%f", &n);

  if(n>=0){
    printf("Número %.2f é positivo\n", n);
  }
  else{
    printf("Número %.2f é negativo\n", n);
  }

  return 0;
}
