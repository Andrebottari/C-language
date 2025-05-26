//1)Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
//para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
//“a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
//estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.


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