#include <stdio.h>

int main(){

    printf("\n===Verificado se esta na Faixa===\n");

    int numUsuario;

    printf("\nDigite um numero: \n");
    scanf("%d", &numUsuario);

    if (numUsuario >= 1 && numUsuario <= 9)
    {
        printf("\nO numero %d esta na faixa de 1 a 9!\n", numUsuario);
    }else{
        printf("\nO numero %d nao esta na faixa de 1 a 9!\n", numUsuario);
    }


return 0;
}
