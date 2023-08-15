#include <stdio.h>

int main(){

float real, dolar, cambio;

    printf("Escreva o preco em reais: ");
    scanf("%f", &real);

    printf("Escreva a taxa de cambio: ");
    scanf("%f", &cambio);

    dolar = real / cambio;

    printf("O preco em dolar eh %f", dolar);


    return 0;
}