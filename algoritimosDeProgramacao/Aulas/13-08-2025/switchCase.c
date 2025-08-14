#include <stdio.h>

int main(){
/* 
    Codigo para representar como deve ser feito um switch case em C 
*/
    int condicaoSwitch;

    scanf("%d", &condicaoSwitch);
    switch (condicaoSwitch){
    case 1:
        printf("\nDeu 1\n");
        break;
    case 2:
        printf("\nDeu 2\n");
        break;
    default:
        printf("\nNao deu 1 nem 2\n");
        break;
    }

    return 0;
}