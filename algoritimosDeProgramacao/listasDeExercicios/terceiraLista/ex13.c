#include <stdio.h>

int main(){

    printf("===Calculo de Natalidade===");

    int numAbitantes, escolhaUser, numNascimento, numObitos;
    float result;

    printf("\nSelecione:\n01) Taxa de Natalidade\n02) Taxa de Obito\nR:");
    scanf("%d", &escolhaUser);

    switch (escolhaUser)
    {
    case 1:

        printf("\nDigite a quantidade de nascimentos: \n");
        scanf("%d", &numNascimento);
        
        printf("\nDigite a quantidade de abitantes: \n");
        scanf("%d", &numAbitantes);
        
        
        result = (float)(numNascimento*1000)/numAbitantes;
        
        printf("A taxa de natalidade eh igual a %.2f", result);
        
        break;
        case 2:
        
        printf("\nDigite a quantidade de obitos: \n");
        scanf("%d", &numObitos);
        
        printf("\nDigite a quantidade de abitantes: \n");
        scanf("%d", &numAbitantes);

        result = (float)(numObitos*1000)/numAbitantes;
        
        printf("A taxa de obitos eh igual a %.2f", result);
        
        break;
    default:
        printf("\nDigite um numero valido...\n");
        break;
    }
    return 0;
}
