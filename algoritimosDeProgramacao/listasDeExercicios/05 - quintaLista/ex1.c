/* 
01) Elaborar um programa que efetue a leitura de dez nomes de pessoas em uma matriz A do tipo vetor e
apresentá-los em seguida. 
*/
#include <stdio.h>

int main(){

    char nomes[10][30];

    int index;

    for(index = 0; index < 10; index++){
        printf("\nDigite o seu nome: \n");
        scanf("%s", &nomes[index]);
    }
    
    index = 0;

    for(index; index <= 10; index++){
        printf("\n%s\n", nomes[index]);
    }

    return 0;
}