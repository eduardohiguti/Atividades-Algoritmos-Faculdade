#include <stdio.h>

int main(){
    float capacidade_tanque, litros_abastecidos, quilometragem_percorrida, consumo_medio, autonomia;
    
    printf("\nInsira a capacidade do tanque de gasolina: ");
    scanf("%f", &capacidade_tanque);

    printf("\nInsira quantos litros foram abastecidos: ");
    scanf("%f", &litros_abastecidos);

    printf("\nInsira a quilometragem percorrida desde o ultimo abastecimento: ");
    scanf("%f", &quilometragem_percorrida);

    consumo_medio = quilometragem_percorrida / litros_abastecidos;

    autonomia = capacidade_tanque * consumo_medio;

    printf("\nO consumo medio do carro e de %.2f km/l", consumo_medio);
    printf("\nA autonomia do carro e de: %.2f km", autonomia);

    return 0;
}
