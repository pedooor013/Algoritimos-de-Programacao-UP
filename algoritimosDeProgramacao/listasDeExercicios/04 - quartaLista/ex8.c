#include <stdio.h>

int main(){

    int quadradosXadrez = 64;
    int count, graosTrigo, somaFinal;


    count = 1;
    graosTrigo = 1;
    somaFinal = 0;

    while(count <= quadradosXadrez){

        printf("\n%d quadrado tem %d graos de trigo\n", quadradosXadrez, graosTrigo);
        
        somaFinal = somaFinal + graosTrigo;
        graosTrigo = graosTrigo*2;
        
        count++;
    }
    printf("\nTemos %d graos de trigo no tabuleiro\n", graosTrigo);

    return 0;
}