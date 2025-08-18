#include <stdio.h>

int main(){
    printf("\n===Seletor de meses===\n");

    int numMesUser;

    printf("Escolha o numero de um mes (1 a 12):\n");
    scanf("%d", &numMesUser);

    switch (numMesUser){
    case 1:
        printf("\n01 - Janeiro\n");
        break;
    case 2:
        printf("\n02 - Fevereiro\n");
        break;
    case 3:
        printf("\n03 - Marco\n");
        break;
    case 4:
        printf("\n04 - Abril\n");
        break;
    case 5:
        printf("\n05 - Maio\n");
        break;
    case 6:
        printf("\n06 - Junho\n");
        break;
    case 7:
        printf("\n07 - Julho\n");
        break;
    case 8:
        printf("\n08 - Agosto\n");
        break;
    case 9:
        printf("\n09 - Setembro\n");
        break;
    case 10:
        printf("\n10 - Outubro\n");
        break;
    case 11:
        printf("\n11 - Novembro\n");
        break;
    case 12:
        printf("\n12 - Dezembro\n");
        break;
    default:
        printf("\nDigite um numero valido...\n");
    }
    return 0;
}
