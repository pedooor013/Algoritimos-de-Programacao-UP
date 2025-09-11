#include <stdio.h>

int main(){

    int contagemArray = 2;
    float tabelaAlunos[contagemArray][5], media[contagemArray];

    for(int count = 0; count < contagemArray; count++){
        printf("\nDigite o codigo do aluno:\n");
        scanf("%f", &tabelaAlunos[count][0]);

        do{   
            printf("Digite o valor da primeira nota de prova do aluno (0 a 7): ");
            scanf("%f", &tabelaAlunos[count][1]);
        }while(tabelaAlunos[count][1] > 10 || tabelaAlunos[count][1] < 0);
        do{   
            printf("Digite o valor da primeira nota de trabalho do aluno (0 a 10): ");
            scanf("%f", &tabelaAlunos[count][2]);
        }while(tabelaAlunos[count][2] > 10 || tabelaAlunos[count][2] < 0);
        do{   
            printf("Digite o valor da segunda nota de prova do aluno (0 a 10): ");
            scanf("%f", &tabelaAlunos[count][3]);
        }while(tabelaAlunos[count][3] > 10 || tabelaAlunos[count][3] < 0);
        do{   
            printf("Digite o valor da segunda nota de trabalho do aluno (0 a 10): ");
            scanf("%f", &tabelaAlunos[count][4]);
        }while(tabelaAlunos[count][4] > 10 || tabelaAlunos[count][1] < 0);

        media[count] = (((tabelaAlunos[count][1] + tabelaAlunos[count][2])/2) + ((tabelaAlunos[count][3] + tabelaAlunos[count][4])/2)) /2 ;
    }
    printf("\nTabela:\n%-10s |%-10s |%-10s |%-10s |%-11s|%-10s \n", "Cod Aluno", "Nota P1", "Nota T1", "Nota P2", "Nota T2", "Media");
    for(int count = 0; count < contagemArray; count++){
        printf("%-10.0f | %-9.1f | %-9.1f | %-9.1f | %-9.1f | %-9.1f\n", tabelaAlunos[count][0], tabelaAlunos[count][1], tabelaAlunos[count][2], tabelaAlunos[count][3], tabelaAlunos[count][4], media[count]);
    }
}