#include <stdio.h>

int main(){

    float larguraComodo, comprimentoComodo, metrosQuadradosTotal, metrosQuadradosComodo;
    char respostaUser = 'S';
    char nomeComodo[30];
    
    metrosQuadradosTotal = 0;
    do{
        printf("\nDigite o nome do comodo: \n");
        scanf("%s", nomeComodo);

        printf("\nDigite a largura do comodo: \n");
        scanf("%f", &larguraComodo);
        
        printf("\nDigite a comprimento do comodo: \n");
        scanf("%f", &comprimentoComodo);

        metrosQuadradosComodo = comprimentoComodo * larguraComodo;
        metrosQuadradosTotal = metrosQuadradosTotal + metrosQuadradosComodo;

        printf("\nO seu comodo: %s tem %.2f metros quadrados\n\n\nVoce deseja calcular outros comodo (S = SIM; N = NAO):", nomeComodo, metrosQuadradosComodo);
        scanf(" %c", &respostaUser);

    }while(respostaUser != 'N');

    printf("\nA sua residencia tem %.2f metros quadrados\n", metrosQuadradosTotal);

    return 0;
}