#include<stdio.h>

int main(){

    int segundos=0, minutos=0, horas=0;

    printf("Digite quantos segundos: ");
    scanf("%d", &segundos);

    horas    = segundos / 3600;            // 1 hora = 3600 segundos
    minutos  = (segundos % 3600) / 60;     // pega o que sobra depois das horas
    segundos = (segundos % 3600) % 60;     // pega o que sobra depois das horas e minutos

    printf("\n %d:%d:%d\n", horas, minutos, segundos);

    return 0;}
