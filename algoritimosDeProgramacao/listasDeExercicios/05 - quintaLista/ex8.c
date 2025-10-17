// 08) Elaborar um programa que leia uma matriz A de duas dimensões com quatro linhas e cinco colunas,
// armazenando nessa matriz os valores das temperaturas em graus Celsius. Construir a matriz B de mesma
// dimensão, em que cada elemento seja o valor da temperatura em graus Fahrenheit de cada elemento
// correspondente da matriz A. Apresentar ao final as matrizes A e B.

#include <stdio.h>

int main(){

    int matrizA[4][5];
    float matrizB[4][5];

    for(int count = 0; count < 4; count++){
        for(int countLinha = 0; countLinha < 5; countLinha++){
            printf("\nDigite o valor em graus celsius:\n");
            scanf("%d", &matrizA[count][countLinha]);
            matrizB[count][countLinha] = (matrizA[count][countLinha] * 1.8) + 32;
        }
    }

    printf("\nValores em Graus celsius: \n");
    for(int count = 0; count < 4; count++){ 
        for(int countLinha = 0; countLinha < 5; countLinha++){
            printf("\n%d Celsius\n", matrizA[count][countLinha]);
        }
    }

    printf("\nValores em Fahrenheit");
    for(int count = 0; count < 4; count++){
        for(int countLinha = 0; countLinha < 5; countLinha++){
            printf("\n%.1f Fahrenheit\n", matrizB[count][countLinha]);
        }
    }


    return 0;
}