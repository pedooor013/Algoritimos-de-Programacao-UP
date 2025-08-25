#include <stdio.h>

int main(){

    int numUsuario;

    do{
        printf("\nDigite um numero: \n");
        scanf("%d", &numUsuario);


    }while (numUsuario!= 0);
    
    printf("Voce digitou 0 para parar o 'Do While'!");
    return 0;
}