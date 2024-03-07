/*
Faça um programa que calcule e mostre a área de um círculo.
Sabe-se que: Area<-3.1415*raio^2
Raio^2<-Raio* Raio
ou
Função pow(n,2)
*/
#include<stdio.h>
#include<math.h>
#define PI 3.1415

float area,raio;

int main(){
  printf("Digite o valor do raio\n");
  scanf("%f", &raio);

  area=PI*(pow(raio,2));

  printf("\nA area da circunferencia e %.2f cm\n", area);

  return 0;
}
