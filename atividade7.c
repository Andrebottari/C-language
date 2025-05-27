//7) Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.

#include<stdio.h>

int main(){
    
    int v1=0,v2=0,v3=0, maior=0, menor=0;

    printf("Digite o 3 valores: ");
    scanf("%d %d %d", &v1, &v2, &v3);

    if (v1 > v2) {
        maior = v1;
        menor = v2;
    } else {
        maior = v2; 
        menor = v1;
    }

    if (v3>maior){
                maior = v3;
    } else if (v3<menor){
        menor = v3;
    }

    printf("Maior valor: %d\n Menor valor: %d", maior, menor);
    
    return 0;
}