#include <stdio.h>

int main(){

    char userSex;
    int userAge;

    printf("Insira o seu sexo (M / F) \n");
    scanf("%c", &userSex);
    fflush(stdin);
    
    printf("Insira a sua idade: ");
    scanf("%d", &userAge);
    fflush(stdin);

    printf("Voce eh do sexo %c e tem %d anos", userSex, userAge);

    return 0;    
}