#include <stdio.h>

int main(){

    int mediaFinal,count, somaFinal, countNumPar;

    somaFinal = 0;
    count = 50;
    countNumPar = 0;
    do{
        if (count%2 == 0){
            somaFinal = somaFinal + count;
            countNumPar++;
        }
        count++;
    }while(count <= 70);
    mediaFinal = somaFinal / countNumPar;
    printf("\nMedia = %d\nSoma final = %d\n", mediaFinal, somaFinal);
    return 0;
}