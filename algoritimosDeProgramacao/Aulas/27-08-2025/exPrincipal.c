#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    //Objeto aluno
    struct Aluno{
        char turma;
        float media;
        char statusAprovacao[19];
    };

int main(){

    char nomeTurma;
    int qntAlunos, parar, numBimestre;
    float notaProva, notaTrabalho, notaExame, somaTotal, mediaAluno; 
    struct Aluno *alunos = NULL;
    int countAlunos = 0; 
    parar = 1;
    
    while(parar != 0){
        numBimestre = 1;
        printf("\nDigite o nome da turma: \n");
        scanf("%s", &nomeTurma);
        
        printf("\nDigite a quantidade de alunos: \n");
        scanf("%d", &qntAlunos);

        countAlunos = countAlunos + qntAlunos;

        alunos = realloc(alunos, countAlunos * sizeof(struct Aluno));


        for(int count = 0; count < qntAlunos; count++){

            while(numBimestre <= 4){
                printf("\nDigite a nota da prova do %d bimestre do aluno (0 a 8): \n", numBimestre);
                scanf("%f", &notaProva);
                
                while(notaProva < 0 || notaProva > 8){
                    printf("\nValor invalido...\n");
                    
                    printf("\nDigite a nota da prova do %d bimestre do aluno (0 a 8): \n", numBimestre);
                    scanf("%f", &notaProva);
                }
                
                printf("\nDigite a nota do trabalho do %d bimestre do aluno (0 a 2): \n", numBimestre);
                scanf("%f", &notaTrabalho);
                
                while(notaTrabalho< 0 || notaTrabalho > 2){
                    printf("\nValor invalido...\n");
                    
                    printf("\nDigite a nota do trabalho do %d bimestre do aluno (0 a 2): \n", numBimestre);
                    scanf("%f", &notaTrabalho);
                }

                somaTotal = somaTotal + notaTrabalho + notaProva;

                numBimestre++;
            }
            mediaAluno = somaTotal/4;
            
            if(mediaAluno >= 6.75){
                alunos[count].turma = nomeTurma;
                alunos[count].media = mediaAluno;
                strcpy(alunos[count].statusAprovacao, "Aprovado!");
            }else if(mediaAluno > 4 && mediaAluno < 6.75){
                
                printf("\nNecessario fazer exame...\n");
                printf("\nDigite a nota do exame: \n");
                scanf("%f", &notaExame);
                mediaAluno = (mediaAluno + notaExame) / 2;
                
                if(mediaAluno >= 5){
                    alunos[count].turma = nomeTurma;
                    alunos[count].media = mediaAluno;
                    strcpy(alunos[count].statusAprovacao, "Aprovado com exame!");
                }
                else{
                
                    alunos[count].turma = nomeTurma;
                    alunos[count].media = mediaAluno;
                    strcpy(alunos[count].statusAprovacao, "Reprovado!");
                    
                }
            }else if(mediaAluno<4){
            
                alunos[count].turma = nomeTurma;
                alunos[count].media = mediaAluno;
                strcpy(alunos[count].statusAprovacao, "Reprovado!");
            };
        };
        printf("\nDeseja calcular as notas de outras turmas (1-SIM, 2-NAO):\n");
        scanf("%d", &parar);
    };

    printf("\n===Lista de Alunos===\n");
    
    for(int i = 0; i < countAlunos; i++){
        printf("Turma: %c; Media: %.2f; Aprovacao: %29s\n", alunos[i].turma, alunos[i].media, alunos[i].statusAprovacao);
    }


    return 0;
}