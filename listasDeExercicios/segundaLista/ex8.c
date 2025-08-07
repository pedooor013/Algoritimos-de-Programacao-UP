#include <stdio.h>

int main(){
    printf("\n===Calculo novo salario===\n");

    float salarioAtual, salarioNovo, porcentagemAumento;

    printf("Digite o valor do seu salario atual: ");
    scanf("%f", &salarioAtual);
    
    printf("Digite a porcentagem de aumento salarial: ");
    scanf("%f", &porcentagemAumento);

    salarioNovo = ((porcentagemAumento/100)*salarioAtual)+salarioAtual;

    printf("O seu novo salario eh de R$%.2f", salarioNovo);


    return 0;
}