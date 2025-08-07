#include <stdio.h>

int main(){

    printf("\n===Atraso de prestacao===\n");

    int diasAtraso;
    float vlrCompra, vlrPrestacao, vlrTaxa;

    printf("Digite o valor inicial da sua compra: \n");
    scanf("%f", &vlrCompra);
    
    printf("Digite quantos dias esta atrasado: \n");
    scanf("%d", &diasAtraso);
    
    printf("Digite o valor da taxa: \n");
    scanf("%f", &vlrTaxa);

    vlrPrestacao = vlrCompra + (vlrCompra*(vlrTaxa/100)*diasAtraso);

    printf("O valor total da sua prestacao com os adicionais eh igual a R$%.2f", vlrPrestacao);


    return 0;
}