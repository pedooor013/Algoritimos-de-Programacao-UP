#include <stdio.h>

int main(){

    int quadradosXadrez = 64;
    double count, graosTrigo, somaFinal;


    count = 1;
    graosTrigo = 1;
    somaFinal = 0;

    while(count <= quadradosXadrez){

        printf("\n%.0f quadrado tem %.0f graos de trigo\n", count, graosTrigo);
        
        somaFinal = somaFinal + graosTrigo;
        graosTrigo = graosTrigo*2;
        
        count++;
    }
    printf("\nTemos %.0f graos de trigo no tabuleiro\n", somaFinal);

    return 0;
}