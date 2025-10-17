/*
07) Elaborar um programa que leia duas matrizes A e B cada uma com uma dimensão para 12 elementos reais.
Construir uma matriz C de duas dimensões, sendo a primeira coluna da matriz C formada pelos elementos
da matriz A multiplicados por 2 e a segunda coluna formada pelos elementos da matriz B subtraídos de 5.
Apresentar separadamente as matrizes.
*/

#include <stdio.h>

int main()
{

    int matrizA[12], matrizB[12], matrizC[2][12], count = 0;

    for (count = 0; count < 12;count++){
        printf("\nDigite o %d termo para a matriz A: \n", count+1);
        scanf("%d", &matrizA[count]);
    }
    for (count = 0; count < 12;count++){
        printf("\nDigite o %d termo para a matriz B: \n", count+1);
        scanf("%d", &matrizB[count]);
    }


    for(int countColuna = 0; countColuna < 12; countColuna++){
        matrizC[0][countColuna] = matrizA[countColuna] * 2;  
    }
    
    for(int countLinha = 0; countLinha < 12; countLinha++){
        matrizC[1][countLinha] = matrizA[countLinha] - 5;  
    }

     printf("\nMatriz C com valores da Matriz A * 2:\n");
    for(count = 0; count < 12; count++){
        printf("Valor da %d posicao: %d\n", count+1, matrizC[0][count]);
    }
    
    printf("\nMatriz C com valores da Matriz B - 5:\n");
    for(count = 0; count < 12; count++){
        printf("Valor da %d posicao: %d\n", count+1, matrizC[1][count]);
    }
        



    return 0;
}