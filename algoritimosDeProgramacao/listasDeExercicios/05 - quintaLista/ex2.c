/* 
02) Escrever um programa que leia duas matrizes A e B do tipo vetor com 20 elementos reais. Construir uma
matriz C, sendo cada elemento da matriz C a subtração de um elemento correspondente da matriz A com
um elemento correspondente da matriz B. Ao final, apresentar os elementos da matriz C.
*/

#include <stdio.h>
int main(){

    int limiteArray = 3;
    float arrayNumerosUm[limiteArray], arrayNumerosDois[limiteArray], resultado[limiteArray];
    int index;

    for(index = 0; index <= limiteArray; index++){
        printf("\nDigite um valor para o array A: \n");
        scanf("%f", &arrayNumerosUm[index]);
        printf("\nDigite um valor para o array B: \n");
        scanf("%f", &arrayNumerosDois[index]);
        resultado[index] = arrayNumerosUm[index] - arrayNumerosDois[index];
    }
    for(index = 0; index <= limiteArray; index++){
        printf("\n%.2f - %.2f = %.2f\n", arrayNumerosUm[index], arrayNumerosDois[index], resultado[index]);
    }
    return 0;
}

