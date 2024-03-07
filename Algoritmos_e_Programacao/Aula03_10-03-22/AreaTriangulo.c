/*
Construir um algoritmos que calcule 
a área de um triângulo dado a base e a altura.
Fórmula: area=(base*altura)/2
*/
#include<stdio.h>

float alt, base, area;

int main(){
  printf("Digite a altura do triangulo\n");
  scanf("%f", &alt);

  printf("Digite a base do triangulo\n");
  scanf("%f", &base);

  area=(base*alt)/2;

  printf("\nA area do triangulo e %.2f\n", area);

  return 0;
}
