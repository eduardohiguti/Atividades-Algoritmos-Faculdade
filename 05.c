#include <stdio.h>

int main(){

    int celso, farenrreit;

    printf("Insira a temperatura em graus Celsius: ");
    scanf("%i", &celso);

    farenrreit = (celso * 9/5) + 32;

    printf("A temperatura em Fahrenheit eh %i", farenrreit);




    return 0;
}