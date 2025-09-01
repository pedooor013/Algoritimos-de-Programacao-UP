#include <stdio.h>

int main(){
    
    float A1, A2, media;
    char respostaProfessor = 'S';

    while(respostaProfessor == 'S'){
        
        printf("\nDigite a sua primeira nota:\n");
        scanf("%f", &A1);
        
        printf("\nDigite a sua segunda nota:\n");
        scanf("%f", &A2);
        
        while(A1 < 0 || A1 > 5 || A2 < 0 || A2 > 5){
            
            printf("Voce digitou um valor invalido...\nDigite outro: \n");

            printf("\nDigite a sua primeira nota:\n");
            scanf("%f", &A1);
            
            printf("\nDigite a sua segunda nota:\n");
            scanf("%f", &A2);
            
        
        }
        

        media = (A1 + A2) / 2;
        
        printf("A sua media foi %.2f\n", media);
        
        printf("\nDigite 'S' para continuar o calculo e 'N' para parar: ");
        scanf("%s", &respostaProfessor);
    }

    printf("Calculo encerrado!");

    return 0;
}