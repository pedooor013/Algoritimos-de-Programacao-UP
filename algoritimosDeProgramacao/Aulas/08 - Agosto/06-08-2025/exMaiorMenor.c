#include <stdio.h>

int main()
{
    int num1, num2, MAIOR, MENOR;

    printf("Digite um numero real: \n");
    scanf("%d", &num1);

    MAIOR = num1;

    printf("\nDigite outro numero real:\n");
    scanf("%d", &num2);

    MENOR = num2;

    if(num1 < num2){
        MAIOR = num2;
        MENOR = num1;
        printf("MAIOR = %d\nMENOR = %d", MAIOR, MENOR);
    }else if(MAIOR == MENOR){
        printf("Os dois numeros sao iguais!");
    }
    else{
        printf("MAIOR = %d\nMENOR = %d", MAIOR, MENOR);
    }



    return 0;
}