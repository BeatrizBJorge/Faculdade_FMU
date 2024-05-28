/*
Uma sala de aula tem n alunos que gostariam de calcular o
volume de um cilindro circular. Escreva um programa que solicite
a cada um destes alunos a altura e o raio de seus respectivos
cilindros. Calcule e imprima o valor do volume de cada aluno e
verifique e mostre qual foi o maior volume encontrado e de qual
aluno pertence.

Use a fórmula:
Volume de um cilindro= 3.141592 * raio * raio * altura.
*/

#include<stdio.h>

int i,n,aluno;
float alt,raio,vol,maior;

int main(){
    printf("Quantos alunos tem na sala?\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){// variavel i representa quem é o aluno
        printf("Digite a altura do cilindro\n");
        scanf("%f",&alt);
        printf("\nDigite o raio do cilindro\n");
        scanf("%f",&raio);
        vol=3.141592*raio*raio*alt;
        printf("\nO aluno %d tem o cilindro de volume %.2f\n",i,vol);
        if(vol>maior){
            maior=vol;aluno=i;
        }
        
    }
    return 0;
}
