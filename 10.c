#include <stdio.h>

int main(){

    float venda_do_mes, numero_vendido, salario;

    printf("\nInsira o valor total das vendas no mes: ");
    scanf("%f", &venda_do_mes);

    printf("\nInsira o numero de sapatos vendidos no mes: ");
    scanf("%f", &numero_vendido);

    salario = ((venda_do_mes * 20) / 100) + (numero_vendido * 5);

    printf("\nO salario do vendedor sera de R$ %.2f", salario);

    return 0;
}