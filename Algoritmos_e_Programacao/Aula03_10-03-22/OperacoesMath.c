/*
Faça um algoritmos que leia um número. 
Calcule e imprima o:
- O valor do número ao quadrado
- O valor do número ao cubo
- A raiz quadrada do número
- A raiz cúbica do número
*/
#include<stdio.h>
#include<math.h>

float n, qua, cubo, rq, rc, res;

int main(){
  printf("Digite um numero\n");
  scanf("%f", &n);

  //equações
  qua=pow(n,2); //potencia (base, potencia)
  cubo=pow(n,3);
  rq=sqrt(n); //raiz quadrada
  rc=cbrt(n); //raiz cubica
  res=pow(n,1.0/3.0); //outra maneira de fazer a raiz cubica

  printf("\nO numero %.2f ao quadrado e %.2f\n",n,qua);
  printf("\nO numero %.2f ao cubo e %.2f\n",n,cubo);
  printf("\nA raiz quadradado numero %.2f e %.2f\n",n,rq);
  printf("\nA raiz cubica do numero %.2f e %.2f\n",n,rc);
  printf("\nA raiz cubica do numero %.2f e %.2f\n",n,res);

  return 0;
}
