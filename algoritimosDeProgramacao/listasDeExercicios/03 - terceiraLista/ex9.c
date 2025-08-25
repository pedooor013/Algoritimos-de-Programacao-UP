#include <stdio.h>
#include <ctype.h>

int main(){

    char sexUser;

    printf("\nDigite o seu sexo [M] ou [F]: \n");
    scanf("%c", &sexUser);

    if(toupper(sexUser) == 'M'){
        printf("\nOlá, excelentissimo Senhor.\n");
    }else if(toupper(sexUser) == 'F'){
        printf("\nOlá, excelentissima Senhora.\n");
    }else{
        printf("\nSexo invalido...\n");
    }
}
