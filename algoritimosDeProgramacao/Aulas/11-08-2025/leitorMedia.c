#include <stdio.h>

int main()
{
    printf("\n===Calculador de Media===\n");

    // V0.0
    float media, a1, a2, a3, menor, maior;
    int totalFaltas;

    printf("\nDigite a sua media: \n");
    scanf("%f", &a1);

    printf("\nDigite a sua media: \n");
    scanf("%f", &a2);

    printf("\nDigite a sua quantidade de faltas: \n");
    scanf("%d", &totalFaltas);

    media = (a1 + a2) / 2;
    printf("\nMedia = (%.1f + %.1f) / 2 = %.1f\n", a1,a2,media);

    if (media >= 6 && totalFaltas < 15){
        printf("\nVoce passou! Sua media eh %.1f\n", media);
    }
    else{
        if (media < 6 && totalFaltas < 15){
            printf("\nSua media foi de %.1f, por isso voce devera fazer a substutiva!\nDigite o valor da sua prova substutiva:\n", media);
            scanf("%f", &a3);
            if (a1 > a2 || a1==a2){
                maior = a1;
                menor = a3;
                printf("\nComo a sua nota %.1f foi a menor, ela foi substituida por %.1f!\n", a2, a3);
            }else{
                maior = a2;
                menor = a3;
                printf("\nComo a sua nota %.1f foi a menor, ela foi substituida por %.1f!\n", a1, a3);
            }
            media = (menor+maior)/2;
            printf("(%.1f + %.1f) / 2 = %.1f", maior, menor, media);
            if (media >= 6 || totalFaltas<15){
                printf("\nVoce foi aprovado! Sua media foi de %.1f\n", media);
            }else{
                printf("\nVoce reprovou! Sua media foi de %.1f", media);
            }
        }
        else{
            printf("\nVoce reprovou por falta!!\n");
        }
    }

    return 0;
}