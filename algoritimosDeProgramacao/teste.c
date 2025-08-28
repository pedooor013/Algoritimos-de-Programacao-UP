#include <stdio.h>


int main(){

    int notasAluno[4];
    int count = 0;
    while(count < 4){
        printf("\nDigite a nota do aluno: \n");
        scanf("%d", &notasAluno[count]);
        printf("\nEssa foi a %d nota do aluno = %d\n", count+1, notasAluno[count]);
        count++;
    }

    return 0;
}