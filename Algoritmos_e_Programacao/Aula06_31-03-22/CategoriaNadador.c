/*
Faça um programa que receba a idade de um nadador
e mostre a sua categoria usando as regras a seguir:

|Categoria   | Idade
|Infantil    | 5 a 7
|Juvenil     | 8 a 10
|Adolescente | 11 a 15
|Adulto      | 16 a 30
|Sênior      | Acima de 30
*/
#include<stdio.h>
#include<locale.h>

int id;

int main(){
  setlocale(LC_ALL, "Portuguese");

  printf("Digite sua idade\n");
  scanf("%d",&id);
  if(id>=5 && id<=110){
    if(id>=5 && id<=7){
      printf("\nCategoria Infantil\n");
  }
  else if(id>=8 && id<=10){
    printf("\nCategoria Juvenil\n");
  }
  else if(id>=11 && id<=15){
    printf("\nCategoria Adolescente\n");
  }
  else if(id>=16 && id<=30){
    printf("\nCategoria Adulto\n");
  }
  else if(id>30){
    printf("\nCategoria Senior\n");}
  }else{
    printf("\nIdade fora do intervalo ou Idade Invalida\n");
  }
  return 0;
}
