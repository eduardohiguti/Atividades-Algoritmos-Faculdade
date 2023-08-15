#include <stdio.h>

int main(){

    float valor_gasto, comissao;

    printf("\nInsira o valor gasto no restaurante: ");
    scanf("%f", &valor_gasto);


    comissao = (valor_gasto * 10) / 100;


    printf("\nO valor gasto no restaurante foi R$ %.2f e a comissao do garcom sera de R$ %.2f", valor_gasto, comissao);



    return 0;
}

