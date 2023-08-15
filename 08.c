#include <stdio.h>

int main(){
    
    float km_percorridos, dias_alugados, preco_final;

    printf("\nSabe-se que a diaria do carro custa R$ 70,00 e eh cobrado uma taxa de R$ 0,15 por km percorrido");

    printf("\nInsira quantos quilometros foram percorridos: ");
    scanf("%f", &km_percorridos);

    printf("\nInsira a quantidade de dias o carro foi alugado: ");
    scanf("%f", &dias_alugados);

    preco_final = (km_percorridos * 0.15) + (dias_alugados * 70);

    printf("\nO valor total a ser pago sera de: R$ %.2f", preco_final);



    return 0;
}