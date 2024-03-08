/*
Faça um programa para ler a quantidade adquirida de um produto e o
preço unitário.

- Calcular e escrever o total:
total = quantidade adquirida*preço unitário

- O desconto:
- se quantidade <=5 o desconto será de 2%
- se quantidade estiver entre 6 e 10 o desconto será de 3%
- se quantidade >10 o desconto será de 5%

- Total a pagar:
total a pagar = total - desconto
*/
#include<stdio.h>
#include<locale.h>

int qde;
float preco,desc,total,valorf;

int main(){
  setlocale(LC_ALL, "Portuguese");

  printf("Digite a quantidade de produto\n");
  scanf("%d", &qde);

  printf("Digite o preço unitário do produto\n");
  scanf("%f", &preco);

  total=qte*preco;

  if(qde>0 && qde<=5){
    desc=total*0.02;
  }
  else if(qde>5 && qde<=10){
    desc=total*0.03;
  }
  else if(qde>10){
    desc=total*0.05;
  }

  valorf=total-desc;

  printf("\nTotal da compra R$ %.2f\n", total);
  printf("\nDesconto R$ %.2f\n", desc);
  printf("\nTotal a pagar R$ %.2f\n", valorf);

  return 0;
}
