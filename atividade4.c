//6) Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
//como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
//Dólares.

#include<stdio.h>

int main(){

    float conversao=0, real=0, dolar=5.30;

    printf("Digite o valor em real (BR): ");
    scanf("%f", &real);

    conversao = real / dolar;

    printf("%2.f (R$) correspondente a %.2f (U$)", real, conversao);
   
    return 0;}