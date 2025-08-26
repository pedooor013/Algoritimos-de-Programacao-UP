#include <stdio.h>

int main(){

    int numUsuario;

    printf("\nDigite um numero: \n");
    scanf("%d", &numUsuario);

    for(int i = 0; i <= 10 ; i++){
        printf("\n%d x %d = %d\n", numUsuario, i, (numUsuario*i));
    
    }

    return 0;
}