#include <stdio.h>

int main(){
    
    printf("===Valor ao Quadrado===\n");

    int userNum, numResult;

    printf("Digite um numero:\n");
    scanf("%d", &userNum);

    numResult = userNum*userNum;

    printf("O valor de %d ao quadrado eh igual a %d", userNum, numResult);

    return 0;
}