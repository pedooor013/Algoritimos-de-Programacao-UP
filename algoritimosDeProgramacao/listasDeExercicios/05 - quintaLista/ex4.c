/* 
04) Elaborar um programa que leia duas matrizes do tipo vetor para o armazenamento de nomes de pessoas,
sendo a matriz A com 20 elementos e a matriz B com 30 elementos. Construir uma matriz C, sendo esta a
junção das matrizes A e B. Desta forma, a matriz C deve ter a capacidade de armazenar 50 elementos.
Apresentar os elementos da matriz C.
 */

#include <stdio.h>
#include <string.h>

int main(){

    char arrayNomesUm[20][20], arrayNomesDois[30][20], arrayNomesTotal[50][20];
    int index = 0;

    while(index < 20){
        printf("\nDigite um nome:\n");
        scanf("%19s", arrayNomesUm[index]);
        index++;
    }

    index = 0;

    while(index < 30){
        printf("\nDigite um nome:\n");
        scanf("%19s", arrayNomesDois[index]);
        index++;
    }

    for(int contadorDeNomes = 0; contadorDeNomes < 20; contadorDeNomes++){
        strcpy(arrayNomesTotal[contadorDeNomes], arrayNomesUm[contadorDeNomes]);
        printf("\n%d - %s", contadorDeNomes+1, arrayNomesTotal[contadorDeNomes]);
    }
    for(int contadorDeNomes = 0; contadorDeNomes < 30; contadorDeNomes++){
        strcpy(arrayNomesTotal[contadorDeNomes + 20], arrayNomesDois[contadorDeNomes]);
        printf("\n%d - %s", contadorDeNomes + 20, arrayNomesTotal[contadorDeNomes + 20]);
    }

    return 0;
}