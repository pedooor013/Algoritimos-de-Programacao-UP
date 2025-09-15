/* 
05) Escrever um programa que leia três matrizes (A, B e C) de uma dimensão do tipo vetor com cinco elementos
cada que sejam do tipo real. Construir uma matriz D, sendo esta o resultado da junção das três matrizes (A,
B e C). Desta forma, a matriz D deve ter o triplo de elementos das matrizes A, B e C, ou seja, 15 elementos.
Apresentar os elementos da matriz D.
*/

#include <stdio.h>

int main(){

    float vetorA[5], vetorB[5], vetorC[5], vetorD[15];
    int contadorDeRepeticoesVetor = 0;

    for(contadorDeRepeticoesVetor = 0; contadorDeRepeticoesVetor< 5; contadorDeRepeticoesVetor++){
        printf("\nDigite um numero real: \n");
        scanf("%f", &vetorA[contadorDeRepeticoesVetor]);
    }
    for(contadorDeRepeticoesVetor = 0; contadorDeRepeticoesVetor< 5; contadorDeRepeticoesVetor++){
        printf("\nDigite um numero real: \n");
        scanf("%f", &vetorB[contadorDeRepeticoesVetor]);
    }
    for(contadorDeRepeticoesVetor = 0; contadorDeRepeticoesVetor< 5; contadorDeRepeticoesVetor++){
        printf("\nDigite um numero real: \n");
        scanf("%f", &vetorC[contadorDeRepeticoesVetor]);
    }

    for(contadorDeRepeticoesVetor = 0; contadorDeRepeticoesVetor < 5; contadorDeRepeticoesVetor++){
        vetorD[contadorDeRepeticoesVetor] = vetorA[contadorDeRepeticoesVetor]; 
    }
    for(contadorDeRepeticoesVetor = 0; contadorDeRepeticoesVetor < 5; contadorDeRepeticoesVetor++){
        vetorD[contadorDeRepeticoesVetor + 5] = vetorB[contadorDeRepeticoesVetor]; 
    }
    for(contadorDeRepeticoesVetor = 0; contadorDeRepeticoesVetor < 5; contadorDeRepeticoesVetor++){
        vetorD[contadorDeRepeticoesVetor + 10] = vetorC[contadorDeRepeticoesVetor]; 
    }

    for(contadorDeRepeticoesVetor = 0; contadorDeRepeticoesVetor < 15; contadorDeRepeticoesVetor++){
        printf("\n%.2f\n", vetorD[contadorDeRepeticoesVetor]);
    }
}