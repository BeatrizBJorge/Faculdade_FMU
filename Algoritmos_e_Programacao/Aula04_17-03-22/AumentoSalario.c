/*
Faça um programa que receba o salário de um funcionário, 
calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.
*/
#include<stdio.h>

float sal, nsal;

int main(){
  printf("Qual o seu salario\n");
  scanf("%f", &sal);

  nsal=sal+(sal*0.25); // outra maneira nsal=sal*1.25

  printf("\nSeu novo salario e R$ %.2f\n", nsal);

  return 0;
}
