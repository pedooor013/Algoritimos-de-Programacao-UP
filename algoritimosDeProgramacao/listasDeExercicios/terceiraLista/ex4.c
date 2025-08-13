#include <stdio.h>

int main(){

    int num1,num2,num3, maiorNum,menorNum,medioNum;

    printf("\nDigite um numero: \n");
    scanf("%d", &num1);

    printf("\nDigite um numero: \n");
    scanf("%d", &num2);

    printf("\nDigite um numero: \n");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3){
        maiorNum = num1;
        if(num2 > num3){
            medioNum = num2;
            menorNum = num3;
        }else{
            medioNum = num3;
            menorNum = num2;
        }
    }if(num2 > num1 && num2 > num3){
        maiorNum = num2;
        if(num1 > num3){
            medioNum = num1;
            menorNum = num3;
        }else{
            medioNum = num3;
            menorNum = num1;
        }
        printf("%d, %d, %d", menorNum, medioNum, maiorNum);
    }if(num3 > num1 && num3 > num2){
        maiorNum = num3;
        if(num1 > num2){
            medioNum = num1;
            menorNum = num2;
        }else{
            medioNum = num2;
            menorNum = num1;
        }
        printf("%d, %d, %d", menorNum, medioNum, maiorNum);
    }if(num1 == num2 && num1 == num3){
        printf("Todos os numeros sao iguais a %d", num1);
    }
    

    return 0;
}