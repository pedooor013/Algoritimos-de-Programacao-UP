#include <stdio.h>

int main(){
    printf("\n===Conversor de Dolar para Real===\n");

    float realConversion, dolarQuotation, dolar;

    printf("Insira a quantidade em dolares: ");
    scanf("%f", &dolar);

    printf("Insira a cotacao do dolar: ");
    scanf("%f", &dolarQuotation);

    realConversion = dolarQuotation*dolar;

    printf("O valor da conversão eh igual a R$%.2f", realConversion);
    

    return 0;
}