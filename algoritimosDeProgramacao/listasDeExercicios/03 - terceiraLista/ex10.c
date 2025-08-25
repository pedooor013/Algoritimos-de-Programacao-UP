#include <stdio.h>

int main(){

    printf("\n===Mostra o Valor Somente se Maior que 100===\n");

    int num1,num2,num3,result;

    printf("\nDigite um numero: \n");
    scanf("%d", &num1);

    printf("\nDigite um numero: \n");
    scanf("%d", &num2);

    printf("\nDigite um numero: \n");
    scanf("%d", &num3);

    result = num1 + num2 + num3;

    if(result >= 100){
        printf("O valor da soma foi igual a %d", result);
    }else{
        printf("Deu certo!");
    }


    return 0;
}
