//4) Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o
//número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
//sabendo que são descontados 8% para imposto de renda.

#include<stdio.h>

int main(){

int dias_trabalhados=0;
float total=0, imposto_renda = 0.92;


    printf("Quantos dias foram trabalhados?: ");
    scanf("%d", &dias_trabalhados);

    total = (dias_trabalhados * 45) * imposto_renda;


    printf("O total a receber(Descontado) sera: R$%.2f", total);

    return 0;}