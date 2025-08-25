#include <stdio.h>

int main(){
    printf("===Mutiplicacao de Quatro Numeros===");

    int A, B, C, D, SOMA, MUTIPLICACAO;

    printf("\nDigite um numero para A:\n");
    scanf("%d", &A);

    printf("\nDigite um numero para B:\n");
    scanf("%d", &B);

    printf("\nDigite um numero para C:\n");
    scanf("%d", &C);

    printf("\nDigite um numero para D:\n");
    scanf("%d", &D);

    SOMA = A + B;
    MUTIPLICACAO = A*B;

    printf("\n\n%d + %d = %d\n%d X %d = %d\n\n", A, B, SOMA, A, B, MUTIPLICACAO);
    
    SOMA = A + C;
    MUTIPLICACAO = A * C;
    
    printf("\n\n%d + %d = %d\n%d X %d = %d\n\n", A, C, SOMA, A, C, MUTIPLICACAO);
    
    SOMA = A + D;
    MUTIPLICACAO = A * D;
    
    printf("\n\n%d + %d = %d\n%d X %d = %d\n\n", A, D, SOMA, A, D, MUTIPLICACAO);
    
    SOMA = B + C;
    MUTIPLICACAO = B * C;
    
    printf("\n\n%d + %d = %d\n%d X %d = %d\n\n", B, C, SOMA, B, C, MUTIPLICACAO);
    
    SOMA = B + D;
    MUTIPLICACAO = B * D;
    
    printf("\n\n%d + %d = %d\n%d X %d = %d\n\n", B, D, SOMA, B, D, MUTIPLICACAO);
    
    SOMA = C + D;
    MUTIPLICACAO = C * D;
    
    printf("\n\n%d + %d = %d\n%d X %d = %d\n\n", C, D, SOMA, C, D, MUTIPLICACAO);

    return 0;
}