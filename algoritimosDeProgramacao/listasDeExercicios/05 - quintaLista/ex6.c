/* 
06) Elaborar um programa que leia duas matrizes A e B, cada uma de duas dimensões com cinco linhas e três
colunas para valores inteiros. Construir uma matriz C de mesma dimensão, que seja formada pela soma
dos elementos da matriz A com os elementos da matriz B. Apresentar os elementos da matriz C.
*/

#include <stdio.h>

int main(){

    int matrizA[5][3], matrizB[5][3], matrizC[5][3];
    int contadorDeRepeticoesArray = 0, count = 0;

    for(contadorDeRepeticoesArray = 0; contadorDeRepeticoesArray < 5; contadorDeRepeticoesArray++){
        while(count < 3){
            printf("\nDigite um numero: \n");
            scanf("%d", &matrizA[contadorDeRepeticoesArray][count]);
            printf("\nDigite um numero: \n");
            scanf("%d", &matrizB[contadorDeRepeticoesArray][count]);

            matrizC[contadorDeRepeticoesArray][count] = matrizA[contadorDeRepeticoesArray][count] + matrizB[contadorDeRepeticoesArray][count];  

            count++;
        }
        count = 0;
    }
    for(contadorDeRepeticoesArray = 0; contadorDeRepeticoesArray < 5; contadorDeRepeticoesArray++){
        while(count < 3){
            printf("\t%d.%d - %d\t", contadorDeRepeticoesArray + 1, count + 1, matrizC[contadorDeRepeticoesArray][count]);
            count++;
        }
        printf("\n");
        count = 0;
    }

    return 0;
}