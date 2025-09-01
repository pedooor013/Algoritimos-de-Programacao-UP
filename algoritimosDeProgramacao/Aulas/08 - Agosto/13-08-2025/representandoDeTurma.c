#include <stdio.h>

int main()
{

    int votoCoordenador;

    printf("\nQual vai ser o voto do Helton: \n\n1) Mariazinha\n2) Ronaldinho\n3) Rogerinho\n\nVoto Helton: ");
    scanf("%d", &votoCoordenador);
//Codigo com if
    /*if(votoCoordenador == 1){
        printf("\nA candidata 1 Mariazinha foi eleita pelo Helton!\n");
        }if(votoCoordenador == 2){
            printf("\nO candidato 2 Ronaldinho foi eleito pelo Helton!\n");
            }if(votoCoordenador == 3){
                printf("\nO candidato 3 Rogerinho foi eleito pelo Helton!\n");
                }
                */

// Codigo com Switch Case
    switch (votoCoordenador)
    {
    case 1:
        printf("\nA candidata 1 Mariazinha foi eleita pelo Helton!\n");
        break;
    case 2:
        printf("\nO candidato 2 Ronaldinho foi eleito pelo Helton!\n");
        break;
    case 3:
        printf("\nO candidato 3 Rogerinho foi eleito pelo Helton!\n");
        break;

    default:
        printf("\nNenhum aluno foi escolhido!\n");
        break;
    }

    return 0;
}