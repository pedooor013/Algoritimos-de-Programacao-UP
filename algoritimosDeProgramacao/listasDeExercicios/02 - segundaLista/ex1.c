#include <stdio.h>

int main()
{
    printf("===Conversor de Celsios para Fahrenheit===\n");

    float tempCelsios, tempFahr;

    printf("Digite a temperatura em graus celcius para ser convertida: \n");
    scanf("%f", &tempCelsios);

    tempFahr = (9*tempCelsios+150)/5;
    
    printf("\n%.2fº em Fahrenheit é %.2f", tempCelsios, tempFahr);

    return 0;
}