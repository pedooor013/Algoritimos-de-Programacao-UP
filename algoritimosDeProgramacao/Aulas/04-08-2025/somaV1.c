#include <stdio.h>

int main(){
    printf("===Primeira Versao===\n");

    int firstNum, secondNum, sumNum, mutiplyNum;
    
    printf("Digite o primeiro numero: \n");
    scanf("%d", &firstNum);
    
    printf("Digite o segundo numero: \n");
    scanf("%d", &secondNum);
    
    sumNum = firstNum + secondNum;
    mutiplyNum = firstNum * secondNum;
    
    printf("%d + %d = %d\n", firstNum, secondNum, sumNum);
    printf("%d * %d = %d", firstNum, secondNum, mutiplyNum);

    printf("\n===========================================================\n");
    
    printf("\n===Segunda Versao===\n");
    
    int lessNum = firstNum - secondNum;

    printf("%d + %d = %d\n", firstNum, secondNum, sumNum);
    printf("%d * %d = %d\n", firstNum, secondNum, mutiplyNum);
    printf("%d - %d = %d\n", firstNum, secondNum, lessNum);
    
    
    printf("\n===========================================================\n");
    
    
    printf("===Terceira Versao===\n");
    
    float divisionNum = (float)firstNum / secondNum;
    
    printf("%d + %d = %d\n", firstNum, secondNum, sumNum);
    printf("%d * %d = %d\n", firstNum, secondNum, mutiplyNum);
    printf("%d - %d = %d\n", firstNum, secondNum, lessNum);
    printf("%d / %d = %.3f\n", firstNum, secondNum, divisionNum);
    
    printf("\n===========================================================\n");
    
    printf("===Terceira Versao===\n");
    
    printf("Os numeros envolvidos nas contas serao: %d e %d\n", firstNum, secondNum);
    printf("%d + %d = %d\n", firstNum, secondNum, sumNum);
    printf("%d * %d = %d\n", firstNum, secondNum, mutiplyNum);
    printf("%d - %d = %d\n", firstNum, secondNum, lessNum);
    printf("%d / %d = %.3f\n", firstNum, secondNum, divisionNum);
    
    printf("\n===========================================================\n");
    
    printf("===Quarta Versao===\n");
    
    printf("%d + %d = %d \n %d X %d = %d \n %d - %d = %d \n %d / %d = %.3f", firstNum, secondNum, sumNum, firstNum, secondNum, mutiplyNum, firstNum, secondNum, lessNum, firstNum, secondNum, divisionNum);

    printf("\n===========================================================\n");
    
    printf("===Quinta Versao===\n");
    
    float squatFirstNum = (float)firstNum*firstNum;
    float cubeSecondNum = (float)secondNum*secondNum*secondNum; 

    printf("%d + %d = %d \n %d X %d = %d \n %d - %d = %d \n %d / %d = %.3f \n %d ao quadrado = %.3f\n %d ao cubo = %.3f", 
        firstNum, secondNum, sumNum,
         firstNum, secondNum, mutiplyNum,
          firstNum, secondNum, lessNum,
           firstNum, secondNum, divisionNum,
            firstNum, squatFirstNum
            ,secondNum,cubeSecondNum);

    printf("\n===========================================================\n");
    
    return 0;
    
}