/* 
10) Elaborar um programa que leia uma matriz A do tipo real de duas dimensões com quatro linhas e quatro
colunas. Apresentar o somatório dos elementos situados na diagonal principal da referida matriz.
*/
#include <stdio.h>

int main(){

    int matrizA[4][4], soma = 0;

    for(int linha = 0; linha < 4; linha++){
        for(int coluna = 0; coluna < 4; coluna++){
            printf("\nDigite um numero inteiro para a posicao [%d][%d]\n", linha+1, coluna+1);
            scanf("%d", &matrizA[linha][coluna]);
            if(linha == coluna){
                soma = soma + matrizA[linha][coluna];
            }
        }
    }

    printf("\nA soma da diagonal principal eh igual a: %d ", soma);

    return 0;
}