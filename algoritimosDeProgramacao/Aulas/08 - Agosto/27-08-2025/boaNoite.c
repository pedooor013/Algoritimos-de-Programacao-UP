#include <stdio.h>

int main(){

    int qntBoaNoite, idadeUser;

    printf("\nDigite quantos 'Boa noite' voce quer receber: \n");
    scanf("%d", &qntBoaNoite);
    printf("\nDigite a sua idade: \n");
    scanf("%d", &idadeUser);


    for(int i = 1; i <= qntBoaNoite ; i++){
        printf("\nBoa noite %d\n", i);
    }
    printf("Sua idade eh %d", idadeUser);


    return 0;
}