#include <stdio.h>

int main(){

    int numUsuario, result; 
    
    do{
        printf("\nDigite um numero: \n");
        scanf("%d", &numUsuario);
        if(numUsuario<50 || numUsuario >150 ){
            printf("\nValor invalido...\n");
            numUsuario = 1;
        }

        result = numUsuario%5; 


    }while (result != 0);
    
    printf("\nO numero %d eh um numero divisivel por 5!\n", numUsuario);
    return 0;
}