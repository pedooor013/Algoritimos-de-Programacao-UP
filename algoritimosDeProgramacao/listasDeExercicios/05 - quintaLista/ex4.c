/* 
04) Elaborar um programa que leia duas matrizes do tipo vetor para o armazenamento de nomes de pessoas,
sendo a matriz A com 20 elementos e a matriz B com 30 elementos. Construir uma matriz C, sendo esta a
junção das matrizes A e B. Desta forma, a matriz C deve ter a capacidade de armazenar 50 elementos.
Apresentar os elementos da matriz C.
 */

#include <stdio.h>

int main(){

    char arrayNomesUm[3][20], arrayNomesDois[2][20], arrayNomesTotal[5][20];
    int index = 0;

    while(index < 3){
        printf("\nDigite um nome:\n");
        scanf("%s", &arrayNomesUm[index][20]);
        arrayNomesTotal[index][20] = arrayNomesUm[index][20];
        index++;
    }
    while(index < 5){
        printf("\nDigite um nome:\n");
        scanf("%s", &arrayNomesDois[index][20]);
        arrayNomesTotal[index][20] = arrayNomesDois[index][20];
        index++;
    }

    for(int contadorDeNomes = 0; contadorDeNomes < 5; contadorDeNomes++){
        printf("%d - %s", contadorDeNomes, arrayNomesTotal[contadorDeNomes]);
    }
    
}