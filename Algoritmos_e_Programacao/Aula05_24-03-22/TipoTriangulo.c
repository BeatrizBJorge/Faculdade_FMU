/*
Faça um programa que leia os três lados de um
triângulo e diga ao usuário qual o tipo do
triângulo:

- Equilatero: 3 lados iguais
- Isósceles: 2 lados iguais
- Escaleno: 0 lados iguais
*/
#include<stdio.h>

float a,b,c;

int main(){
  printf("Digite o tamanho do lado A\n");
  scanf("%f", &a);

  printf("Digite o tamanho do lado B\n");
  scanf("%f", &b);

  printf("Digite o tamanho do lado C\n");
  scanf("%f", &c);

  if(a==b && b==c){
    printf("\nTriangulo Equilatero\n");
  }
  else if(a==b || b==c || c==a){
    printf("\nTriangulo Isoceles\n");
  }
  else{
    printf("\nTraingulo Escaleno\n");
  }

  return 0;
}
