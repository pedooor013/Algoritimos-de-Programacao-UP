#include <stdio.h>

int main(){
    char nomeUser[30];

    printf("\nDigite o nome desejado:\n");
    gets(nomeUser);

    

    printf("\nO nome é %s", nomeUser);

    return 0;
}