#include <stdio.h>

int main(){

    int num1, antecessor, sucessor;

    printf("Insira um numero ");
    scanf("%i", &num1);

    antecessor = num1 - 1;
    sucessor = num1 + 1;

    printf("O seu numero e %i, o antecessor e %i, o sucessor e %i", num1, antecessor, sucessor);


    return 0;
}