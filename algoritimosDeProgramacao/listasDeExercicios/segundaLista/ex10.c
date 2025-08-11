#include <stdio.h>

int main()
{

    float num1, num2, resultSoma, resultMutiplicacao, resultDivicao, resultSubtracao;

    printf("\n===Operacoes Basicas===\n");

    printf("\nDigite um número real: \n");
    scanf("%f", &num1);

    printf("\nDigite um número real: \n");
    scanf("%f", &num2);

    resultSoma = num1 + num2;
    resultSubtracao = num1 - num2;
    resultMutiplicacao = num1 * num2;
    resultDivicao = num1 / num2;

    printf("\n%.2f + %2.f = %.2f \n %.2f - %.2f = %.2f \n %.2f * %.2f = %.2f \n %.2f / %.2f = %.2f", num1, num2, resultSoma, num1, num2, resultSubtracao, num1, num2, resultMutiplicacao, num1, num2, resultDivicao);
    return 0;
}