#include <stdio.h>

float calcularAMedia(float arrNotas[]);

int main(){
    int count = 0;
    float arrNotas[2];

    for(count = 0; count < 2; count++){
        printf("Digite a nota do aluno: \n");
        scanf("%f", &arrNotas[count]);
    }
    float mediaAluno = calcularAMedia(arrNotas);
    
    printf("\nA media final do aluno foi de %.1f\n", mediaAluno);
    return 0;
};

float calcularAMedia(float arrNotas[]){
    float mediaFinal = (arrNotas[0] + arrNotas[1]) / 2;
    return mediaFinal;
}

