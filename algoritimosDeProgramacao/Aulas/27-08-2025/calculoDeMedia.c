#include <stdio.h>

int main(){

    float mediaFinal, notas;
    int qntTrabalhos;

    mediaFinal = 0;

    printf("\nDigite a quantidade de trabalhos que o aluno realizou: \n");
    scanf("%d", &qntTrabalhos);

    for(int count = 1; count <= qntTrabalhos; count++){

        printf("\nDigite a nota do trabalho: \n");
        scanf("%f", &notas);

        mediaFinal = mediaFinal+notas;
    }

    mediaFinal = mediaFinal/qntTrabalhos;
    printf("\nA media final eh %.1f\n", mediaFinal);
    return 0;
}