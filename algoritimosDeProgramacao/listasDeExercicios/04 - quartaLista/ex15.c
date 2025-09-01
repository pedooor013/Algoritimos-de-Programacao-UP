#include <stdio.h>

int main()
{

    int dividendo, divisor, resultInteiro, count;

    printf("\nDigite o dividendo: \n");
    scanf("%d", &dividendo);

    printf("\nDigite o divisor: \n");
    scanf("%d", &divisor);

    int dividendoOriginal = dividendo;
    count = 0;

    do
    {
        resultInteiro = dividendo - divisor;

        dividendo = resultInteiro;

        if (resultInteiro >= 0)
        {
            count++;
        }
    } while (resultInteiro > 0);

    printf("\nA divisão inteira entre %d e %d eh igual a %d \n", dividendoOriginal, divisor, count);

    return 0;
}
/* 15. Elaborar um programa que apresente o resultado inteiro da divisão de dois números quaisquer,
representando o dividendo e o divisor da divisão a ser processada. Para a elaboração do programa, não
utilize o operador aritmético de divisão com quociente inteiro DIV. Use uma solução baseada em laço de
repetição. O programa deve apresentar como resultado (quociente) quantas vezes o divisor cabe no
dividendo.
 */