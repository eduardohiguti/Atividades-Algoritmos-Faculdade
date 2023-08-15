#include <stdio.h>

int main(){

    int prova1, prova2, prova3, media;

    printf("Insira a nota da prova 1: (valor maximo: 2) ");
    scanf("%i", &prova1);

    printf("Insira a nota da prova 2: (valor maximo: 3) ");
    scanf("%i", &prova2);

    printf("Insira a nota da prova 3: (valor maximo: 5) ");
    scanf("%i", &prova3);

    if (prova1 > 2){
        return printf("\nva se fude");
    }
    if (prova2 > 3){
        return printf("\nva se fude");
    }
    if (prova3 > 5){
        return printf("\nva se fude");
    }


    media = prova1 + prova2 + prova3;

    printf("\na media das provas e %i", media);




    return 0;
}