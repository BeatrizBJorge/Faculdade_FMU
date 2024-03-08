/*
Faça um algoritmo que leia dois números (considere
que não serão lidos valores iguais) e escrever o maior
deles.
*/
#include<stdio.h>
#include<locale.h>

int n1,n2;

int main(){
    setlocale(LC_ALL,"Portuguese");
    printf("Digite um número\n");
    scanf("%d",&n1);
    printf("\nDigite outro número\n");
    scanf("%d",&n2);
    if(n1!=n2){
        if(n1>n2){
            printf("\nO número %d é maior que %d\n",n1,n2);
        }
        else{
            printf("\nO número %d é maior que %d\n",n2,n1);
        }
    }
    else{
        printf("\nDigite valores que sejam diferentes um do outro\n");
    }
    
    return 0;
}
