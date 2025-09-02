#include <stdio.h>
#include <string.h>


int main(){

    char A1, A2, A3, B1, B2, B3, C1, C2, C3;
    A1 = ' ';
    A2 = ' ';
    A3 = ' ';
    B1 = ' ';
    B2 = ' ';
    B3 = ' ';
    C1 = ' ';
    C2 = ' ';
    C3 = ' ';
    char escolhaX[3], escolhaO[3];

    int jogadas = 1; 
    int repetirX = 0;
    int repetirO = 0;
    
    while(jogadas <= 9){

        printf("\n  1 2 3\nA %c|%c|%c\n  -+-+-\nB %c|%c|%c\n  -+-+-\nC %c|%c|%c", A1, A2, A3, B1, B2, B3, C1, C2, C3);

        //Pedir para o X escolher uma posição 
        do{
            printf("\nEscolha uma posição: ");
            scanf("%2s", &escolhaX);

            if(strcmp(escolhaX, "A1") == 0 && A1 == ' '){
                A1 = 'X';
                repetirX = 0;
            }
            else if(strcmp(escolhaX, "A2") == 0 && A2 == ' '){
                A2 = 'X';
                repetirX = 0;
            }
            else if(strcmp(escolhaX, "A3") == 0 && A3 == ' '){
                A3 = 'X';
                repetirX = 0;
            }
            else if(strcmp(escolhaX, "B1") == 0 && B1 == ' '){
                B1 = 'X';
                repetirX = 0;
            }
            else if(strcmp(escolhaX, "B2") == 0 && B2 == ' '){
                B2 = 'X';
                repetirX = 0;
            }
            else if(strcmp(escolhaX, "B3") == 0 && B3 == ' '){
                B3 = 'X';
                repetirX = 0;
            }
            else if(strcmp(escolhaX, "C1") == 0 && C1 == ' '){
                C1 = 'X';
                repetirX = 0;
            }
            else if(strcmp(escolhaX, "C2") == 0 && C2 == ' '){
                C2 = 'X';
                repetirX = 0;
            }
            else if(strcmp(escolhaX, "C3") == 0 && C3 == ' '){
                C3 = 'X';
                repetirX = 0;
            }else{
                printf("\nValor invalido!\n");
                repetirX = 1;
            }
        }while(repetirX != 0);
        //Validação de vitoria
        if((A1 == 'X' && B1 == 'X' && C1 == 'X') || (A2 == 'X' && B2 == 'X' && C2 == 'X') || (A3 == 'X' && B3 == 'X' && C3 == 'X')|| (A1 == 'X' && A2 == 'X' && A3 == 'X') || (B1 == 'X' && B2 == 'X' && B3 == 'X') || (C1 == 'X' && C2 == 'X' && C3 == 'X') || (A1 == 'X' && B2 == 'X' && C3 == 'X') || (C1 == 'X' && B2 == 'X' && A3 == 'X')){
            printf("O jogador X ganhou!");
            return 0;
        } 

        printf("\n  1 2 3\nA %c|%c|%c\n  -+-+-\nB %c|%c|%c\n  -+-+-\nC %c|%c|%c", A1, A2, A3, B1, B2, B3, C1, C2, C3);
        do{
            printf("\nEscolha uma posição: ");
            scanf("%2s", &escolhaO);

            if(strcmp(escolhaO, "A1") == 0 && A1 == ' '){
                A1 = 'O';
                repetirO = 0;
            }
            else if(strcmp(escolhaO, "A2") == 0 && A2 == ' '){
                A2 = 'O';
                repetirO = 0;
            }
            else if(strcmp(escolhaO, "A3") == 0 && A3 == ' '){
                A3 = 'O';
                repetirO = 0;
            }
            else if(strcmp(escolhaO, "B1") == 0 && B1 == ' '){
                B1 = 'O';
                repetirO = 0;
            }
            else if(strcmp(escolhaO, "B2") == 0 && B2 == ' '){
                B2 = 'O';
                repetirO = 0;
            }
            else if(strcmp(escolhaO, "B3") == 0 && B3 == ' '){
                B3 = 'O';
                repetirO = 0;
            }
            else if(strcmp(escolhaO, "C1") == 0 && C1 == ' '){
                C1 = 'O';
                repetirO = 0;
            }
            else if(strcmp(escolhaO, "C2") == 0 && C2 == ' '){
                C2 = 'O';
                repetirO = 0;
            }
            else if(strcmp(escolhaO, "C3") == 0 && C3 == ' '){
                C3 = 'O';
                repetirO = 0;
            }else{
                printf("\nValor invalido!\n");
                repetirO = 1;
            } 
        }while(repetirO != 0);
        if((A1 == 'O' && B1 == 'O' && C1 == 'O') || (A2 == 'O' && B2 == 'O' && C2 == 'O') || (A3 == 'O' && B3 == 'O' && C3 == 'O')|| (A1 == 'O' && A2 == 'O' && A3 == 'O') || (B1 == 'O' && B2 == 'O' && B3 == 'O') || (C1 == 'O' && C2 == 'O' && C3 == 'O') || (A1 == 'O' && B2 == 'O' && C3 == 'O') || (C1 == 'O' && B2 == 'O' && A3 == 'O')){
            printf("O jogador O ganhou!");
            return 0;
        } 
        jogadas++;
    }
    printf("\nDeu velha!\n");

    return 0;
}