#include <stdio.h>

int main(){
    int count;
    
    printf("Digite a quantidade de alunos que voce quer saber a idade: \n");
    scanf("%d", &count);

    int idades[count];
/*   ^  ^      ^-- Indice ou Index, é a posição onde é guardado o dado a ser inserido, ATENÇÃO deve ter SEMPRE uma casa a mais do que o esperado, assim sendo, caso queira 10 numeros o index tem que ser 11
    /   -- Nome do vetor, ATENÇÃO importante colocar no plural
    ---Tipo de dado a ser guardado na váriavel
*/
int result = 0;
int index = 0;

    do{
        printf("\nDigite uma idade: \n");
        scanf("%d", &idades[index]);
        result = result + idades[index];
        index++;
    }while(index < count);

    index = 0;

    printf("\nExibicao das notas, primeira até a ultima: \n");
    
    while(index < count){
        printf("\nIdade: %d \n", idades[index]);
        index++;
    }

    printf("\nExibicao das notas, ultima até a primeira: \n");

    while(index > 0){
        index--;
        printf("\nIdade: %d \n", idades[index]);
    }
    float media = (float)result/count;

    printf("\nA soma das idades foi igual a %d\n", result);
    printf("\nA media das idades foi igual a %.0f\n", media);
    return 0;
}