//1)Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
//variável auxiliar.


#include<stdio.h>

int main(){

 int a=0,b=0,c=0;
 
 printf("Digite o valor da variavel A: ");
 scanf("%d", &a);

 printf("Digite o valor da variavel B: ");
 scanf("%d", &b);

 c=a;
 a=b;
 b=c;

 printf("O valor de A: %d \n O valor de B: %d", a,b);
}