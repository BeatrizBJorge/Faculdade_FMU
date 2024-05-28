/*
Faça um programa que leia a altura de 10
pessoas e mostre a quantidade de pessoas com
altura maior do que 1.60.

Contador de inteiros:
cont=cont+1 ou cont++
*/
#include<stdio.h>

int i,cont = 0;
double alt;

int main(){
    for(i=0; i<10; i++){
        printf("Digite sua altura: \n");
        scanf("%lf",&alt);
        if(alt>1.60)
            cont++;
        
    }
    printf("\nEntre as 10 pessoas %d tem mais do que 1.60\n",cont);
    return 0;
}
