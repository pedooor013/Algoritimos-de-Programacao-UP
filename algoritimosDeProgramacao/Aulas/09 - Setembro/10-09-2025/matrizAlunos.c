#include <stdio.h>

int main(){

    int contagemArray = 10;
    float tabelaAlunos[contagemArray][5];

    for(int count = 0; count < contagemArray; count++){
        printf("\nDigite o codigo do aluno:\n");
        scanf("%f", &tabelaAlunos[count][0]);

        printf("Digite o valor da primeira nota de trabalho do aluno: ");
        scanf("%f", &tabelaAlunos[count][1]);
        printf("Digite o valor da primeira nota de prova do aluno: ");
        scanf("%f", &tabelaAlunos[count][2]);
        printf("Digite o valor da segunda nota de trabalho do aluno: ");
        scanf("%f", &tabelaAlunos[count][3]);
        printf("Digite o valor da segunda nota de prova do aluno: ");
        scanf("%f", &tabelaAlunos[count][4]);
    }
    printf("\nTabela:\nCod Aluno | Nota T1 | Nota P2 | Nota T2 | Nota P1\n");
    for(int count = 0; count < contagemArray; count++){
        printf("%.0f | %.1f | %.1f | %.1f | %.1f\n", tabelaAlunos[count][0], tabelaAlunos[count][1], tabelaAlunos[count][2], tabelaAlunos[count][3], tabelaAlunos[count][4]);
    }
}