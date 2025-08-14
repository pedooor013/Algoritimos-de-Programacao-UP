#include <stdio.h>

int main(){
    int maiorNum, menorNum, num1,num2,num3,num4,num5;

    printf("\nDigite um numero: \n");
    scanf("%d", &num1);
    
    maiorNum = num1;
    menorNum = num1;

    printf("\nDigite um numero: \n");
    scanf("%d", &num2);
    if(num2 > maiorNum){
        maiorNum = num2;
    }if(num2<menorNum){
        menorNum = num2;
    }
    
    printf("\nDigite um numero: \n");
    scanf("%d", &num3);
    if(num3 > maiorNum){
        maiorNum = num3;
    }if(num3<menorNum){
        menorNum = num3;
    }
    
    printf("\nDigite um numero: \n");
    scanf("%d", &num4);
    if(num4 > maiorNum){
        maiorNum = num4;
    }if(num4<menorNum){
        menorNum = num4;
    }
    
    printf("\nDigite um numero: \n");
    scanf("%d", &num5);
    if(num5 > maiorNum){
        maiorNum = num5;
    }if(num5<menorNum){
        menorNum = num5;
    }2
    printf("\nO maior numero eh %d e o menor eh %d\n", maiorNum, menorNum);
    return 0;
}
