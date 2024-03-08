/*
Escreva um algoritmo para ler 1 número.
Verificar e imprimir se ele está contido no
intervalo entre 5 e 100.
*/
#include<stdio.h>

int num;

int main(){
  printf("Digite um numero\n");
  scanf("%d", &num);

  if(num>=5 && num<=100){
    printf("\nO numero %d esta contido no intervalo\n",num);
  }
  else{
    printf("\nO numero %d nao esta contido no intervalo\n", num);
  }

  return 0;
}
