#include <stdio.h>



int main(){
    int soma, numUser, count;
    float mediaNum;

    count = 1;
    soma = 0;
    mediaNum = 0;
    while (count <= 10){
        
        printf("\nDigite o valor do %d numero: \n", count);
        scanf("%d", &numUser);

        soma = numUser + soma;

        count++;
    }
    
    mediaNum = (float)soma / 10;

    printf("\nA media dos 10 numeros eh igual a %.2f\nA soma dos 10 numero eh igual a %d\n", mediaNum, soma);

    return 0;
}