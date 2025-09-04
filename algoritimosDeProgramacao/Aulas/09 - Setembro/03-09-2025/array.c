#include <stdio.h>

int main(){

    int testeArray[10];

    for(int count = 0; count <= 10; count++){
        printf("\nDigite um numero: ");
        scanf("%d", &testeArray[count]);
    }
    int i = 0;
    do{
        printf("\nTeste Array Posicao %d >> %d\n", i, testeArray[i]);
        i++;
    }while(i<=10);


    return 0;
}