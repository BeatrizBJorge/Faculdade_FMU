/*
Faça um algoritmo que leia o nome, a idade, o peso e o
sexo de uma pessoa. Imprimir todas as informações no
final.
*/
#include<stdio.h>

int idade;
float peso;
char genero, nome[40];

int main(){
  printf("Digite sua idade\n");
  scanf("%d", &idade);

  printf("\nDigite seu peso\n");
  scanf("%f", &peso);

  printf("\nDigite seu genero\n");
  scanf(" %c", &genero); //guarda uma letra

  printf("\nDigite seu nome\n");
  scanf(" %[^\n]", &nome); //guarda uma frase

  printf("\nIdade: %d, Peso: %2.2f, Genero: %c, Nome: %s\n", idade,peso,genero,nome);

  return 0;
}
