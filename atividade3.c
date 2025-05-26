//3) Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
//porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
//Assuma que a conta será dividida igualmente.

#include<stdio.h>

int main(){

    int  quantidade_pessoas=0;
    float valor_individual=0, valor_conta=0, gorjeta=0, valor_total=0;

    printf("Digite o valor da conta: ");
    scanf("%f", &valor_conta);

    printf("Digite o valor da gorjeta em PORCENTAGEM: ");
    scanf("%f", &gorjeta);

    printf("Digite quantas pessoas vao dividir a conta: ");
    scanf("%d", &quantidade_pessoas);

    gorjeta = valor_conta * gorjeta / 100;
    valor_total = valor_conta + gorjeta;

    valor_individual = valor_total / quantidade_pessoas;

    

    printf("O valor TOTAL:R$ %.2f\n", valor_total);
    printf("O valor INDIVIDUAL:R$ %.2f", valor_individual);

}