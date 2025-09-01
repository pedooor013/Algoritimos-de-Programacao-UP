#include <stdio.h>

int main(){

    int numUser, maiorNum, menorNum, count;

    count = 1;
    do{
        printf("\nDigite um numero: \n");
        scanf("%d", &numUser);
        if(count == 1){
            maiorNum = numUser;
            menorNum = numUser;
        }
        if(numUser > maiorNum){
            maiorNum = numUser;
        }else if(numUser < menorNum && numUser >= 0){
            menorNum = numUser;
        }
        count++;
    }while(numUser >= 0);

    printf("\nO maior numero eh %d\nO menor numero eh %d\n", maiorNum, menorNum);

    return 0;
}