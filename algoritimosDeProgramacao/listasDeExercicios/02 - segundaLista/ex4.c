#include <stdio.h>

int main()
{
    printf("\n===Troca de valores===\n\n");

    int A, B, troca;

    printf("Digite um numero real na variavel A:\n");
    scanf("%d", &A);

    printf("Digite um número real na variavel B:\n");
    scanf("%d", &B);

    troca = A;
    A = B;
    B = troca;

    printf("\nApos a troca ficou:\nA = %d\nB = %d", A,B);


    return 0;
}