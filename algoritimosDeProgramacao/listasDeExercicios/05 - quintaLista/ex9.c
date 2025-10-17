/* 09) Elaborar um programa que leia uma matriz A do tipo inteira de duas dimensões com sete linhas e sete
colunas. Construir a matriz B de mesma dimensão em que cada elemento seja o somatório de 1 até o valor
armazenado na posição da matriz A, com exceção dos valores situados nos índices ímpares da diagonal
principal (B[1,1]; B[3,3]; 8[5,5] e 8[7,7]), os quais devem ser o fatorial de cada elemento correspondente da
matriz A. Apresentar ao final a matriz B.
 */

#include <stdio.h>

int main(){
    int matrizA[7][7], matrizB[7][7];

    for(int linha = 0; linha < 7; linha++){
        for(int coluna = 0; coluna < 7; coluna++){
            printf("\nDigite um numero inteiro: \n");
            scanf("%d", &matrizA[linha][coluna]);
            if(linha == coluna && (linha % 2 != 0)){
                int contadorFatorial = 1;
                matrizB[linha][coluna] = 1;
                for(contadorFatorial = 1; contadorFatorial <= matrizA[linha][coluna]; contadorFatorial++){
                    matrizB[linha][coluna] = matrizB[linha][coluna] * contadorFatorial; 
                }
            }else{
                matrizB[linha][coluna] = 0;
                for(int contadorSoma = 1; contadorSoma <= matrizA[linha][coluna]; contadorSoma++){
                    matrizB[linha][coluna] = matrizB[linha][coluna]+contadorSoma;
                }
            }
        }
    }
    for(int linha = 0; linha < 7; linha++){
        for(int coluna = 0; coluna < 7; coluna++){
            printf("\nMatrizB[%d][%d]: %d\n", linha, coluna, matrizB[linha][coluna]);
        }
    }
    
}