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