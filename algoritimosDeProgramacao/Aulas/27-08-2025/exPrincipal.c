#include <stdio.h>

int main(){

    char nomeTurma;
    int qntAlunos, parar;
    float notaProva, notaTrabalho, media, notaExame;
    
    
    parar = 0;
    //Loop para calculo por turma
    while(parar != 1){

        printf("\nDigite a letra da turma: \n");
        scanf("%s", &nomeTurma);
        
        printf("\nDigite a quantidade de alunos contidos na turma: \n");
        scanf("%d", &qntAlunos);

        //Loop para calcular a nota dos alunos da turma 
        for(int count = 1; count <= qntAlunos; count ++){
            
            //Loop para calcular a nota dos bimestres 
            for(int i = 1; i <= 4; i++){
                
                printf("\nDigite a nota da prova do aluno: \n");
                scanf("%f", &notaProva);
                while (notaProva < 0 || notaProva > 8){
                    printf("\nValor invalido...\n");
                    printf("\nDigite a nota da prova do aluno: \n");
                    scanf("%f", &notaProva);
                }
                
                printf("\nDigite a nota do trabalho do aluno: \n");
                scanf("%f", &notaTrabalho);
                
                //Verificador de valores validos
                /* if(notaProva > 8 || notaProva < 0){

                    do{
                        printf("\nDigite a nota da prova do aluno: \n");
                        scanf("%f", &notaProva);

                        printf("\nDigite um valor valido...\n");
                    }while(notaProva > 8 || notaProva < 0);

                }else if(notaTrabalho > 2 || notaTrabalho < 0){
                    do{
                        printf("\nDigite a nota da prova do aluno: \n");
                        scanf("%f", &notaTrabalho);

                        printf("\nDigite um valor valido...\n");
                    }while(notaTrabalho > 2 || notaTrabalho < 0);
                } */
                //calculo de média do bimestre
                media = (notaProva+notaTrabalho)/2;
            }

            //Arredondador
            if(media >= 6.75){
                printf("\nAprovado\n");

            //Verifica se eh valido para fazer exame
            }else if(media < 6.75 && media > 4){

                printf("\nNecessario fazer um exame!\n");

                printf("\nDigite a nota do exame: \n");
                scanf("%f", &notaExame);

                media = (media + notaExame) / 2;

                //Verifica se passou por exame
                if(media >= 5){
                    printf("\nAprovado por conselho\n");
                }else{
                    printf("\nReprovado!\n");
                }
            }else{
                printf("\nReprovado!\n");
            }
        }
        printf("\nDeseja calcular as notas de outra turma (1- SIM; 2- NÃO): \n");
    }

    return 0;
}