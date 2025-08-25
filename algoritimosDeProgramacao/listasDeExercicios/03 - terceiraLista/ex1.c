#include <stdio.h>

int main()
{
    printf("\n===Diferenca do Maior para o Menor===\n");

    int num1, num2, diferenca;

    printf("\nDigite um numero inteiro: \n");
    scanf("%d", &num1);
    
    printf("\nDigite um numero inteiro: \n");
    scanf("%d", &num2);

    if (num1 > num2){
        diferenca = num1 - num2;
        printf("\nA diferenca entre %d e %d eh igual a %d\n", num1,num2,diferenca);
    }if(num2 > num1){
        diferenca = num2 - num1;
        printf("\nA diferenca entre %d e %d eh igual a %d\n", num2,num1,diferenca);
    }else{
        printf("\nOs numeros sao identicos!\n");
    }
    
    return 0;
}