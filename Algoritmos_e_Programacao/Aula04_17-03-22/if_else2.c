/*
Ler um valor e escrever se é par ou ímpar.
*/
#include<stdio.h>
#include<locale.h>

int n;

int main(){
  setlocale(LC_ALL, "Portuguese");
  
  printf("Digite um número\n");
  scanf("%d", &n);

  if(n%2==0){
    printf("Número par - %d", n);
  }
  else{
    printf("Número ímpar - %d", n);
  }

  return 0;
    
}
