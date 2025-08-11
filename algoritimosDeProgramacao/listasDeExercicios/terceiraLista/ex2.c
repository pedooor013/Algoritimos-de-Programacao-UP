#include <stdio.h>

int main(){
    printf("\n===Calculador de Media===\n");

    float nota1, nota2, nota3, nota4, notaExame, media;

    printf("\nDigite a sua media do primeiro bimestre: \n");
    scanf("%f", &nota1);
    
    printf("\nDigite a sua media do segundo bimestre: \n");
    scanf("%f", &nota2);
    
    printf("\nDigite a sua media do terceiro bimestre: \n");
    scanf("%f", &nota3);
    
    printf("\nDigite a sua media do quarto bimestre: \n");
    scanf("%f", &nota4);

    media = (nota1+nota2+nota3+nota4)/4;

    if (media>=7){
        printf("\nVocê foi aprovado com uma media de %.1f!\n", media);
    }else{
        printf("\nVoce precisa fazer o exame final para atingir a nota, a sua media atual eh %.1f!\n\nDigite a nota do seu exame final: \n", media);
        scanf("%f", &notaExame);

        media = (media + notaExame) / 2;
        if(media>=7){
            printf("\nVoce foi aprovado com exame, sua media foi %.1f\n", media);
        }else{
            printf("\nVoce foi reprovado, sua media foi de %.1f\n", media);
        }
    }
    

    return 0;
}
