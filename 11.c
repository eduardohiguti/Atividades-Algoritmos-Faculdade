#include <stdio.h>

int main(){

    float votos_brancos, votos_nulos, votos_validos, total, p1, p2, p3;

    printf("\nInsira a quantidade de votos brancos: ");
    scanf("%f", &votos_brancos);

    printf("\nInsira a quantidade de votos nulos: ");
    scanf("%f", &votos_nulos);

    printf("\nInsira a quantidade de votos validos: ");
    scanf("%f", &votos_validos);


    total = votos_brancos + votos_nulos + votos_validos;

    p1 = 100 * votos_brancos / total;
    p2 = 100 * votos_nulos / total;
    p3 = 100 * votos_validos / total;

    printf("\nVotos totais: %.0f\nVotos brancos correspondem: %.2f %%\nVotos nulos correspondem: %.2f %%\nVotos validos correspondem: %.2f %%", total, p1, p2, p3);


    return 0;
}