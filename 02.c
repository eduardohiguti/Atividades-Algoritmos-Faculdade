#include <stdio.h>

int main(){

    int horas, minutos, segundos, resultado;

    printf("\nInsira as horas ");
    scanf("%i", &horas);

    printf("Insira os minutos ");
    scanf("%i", &minutos);

    printf("Insira os segundos ");
    scanf("%i", &segundos);

    resultado = (horas * 3600) + (minutos * 60) + segundos;

    printf("Sao %i", resultado);   
    



    return 0;
}