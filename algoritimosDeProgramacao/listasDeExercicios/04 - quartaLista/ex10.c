#include <stdio.h>

int main(){
    int numUser, count, somaNum;
    float mediaNum;

    numUser = 0;
    count = 0;
    somaNum = 0;

    while(numUser >= 0){
        printf("\nDigite um numero: \n");
        scanf("%d", &numUser);
        if(numUser >= 0){
            somaNum = somaNum+numUser;
            count++;
        }
    }
    mediaNum = (float)somaNum / count;

    printf("\nVoce digitou %d vezes \nA media final dos numeros foi de %.2f\nA soma de todos os numeros foi de %d\n", count, mediaNum, somaNum);

    return 0;
}