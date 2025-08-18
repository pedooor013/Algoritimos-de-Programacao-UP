#include <stdio.h>

int main(){

    printf("\n===Sexo do Usuario===\n");

    char sexoUser;

    printf("\nDigite o seu sexo (M e F): \n");
    scanf("%c", &sexoUser);

    switch(sexoUser){
        case 'M':
            printf("\nSexo Masculino\n");
            break;
        case 'F':
            printf("\nSexo Feminino\n");
            break;
        default:
            printf("\nDigite um valor valido...\n");
            break;
    }

    return 0;
}
