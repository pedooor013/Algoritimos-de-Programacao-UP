#include <stdio.h>
#include <math.h>

int main(){

    int numBase, numExponencial, result;

    printf("\nDigite o valor da base: \n");
    scanf("%d", &numBase);
    
    printf("\nDigite o valor da exponenciação: \n");
    scanf("%d", &numExponencial);
    
    while(numBase < 0 || numExponencial < 0){
        if(numBase < 0){
            printf("\nValor da base invalido...\n");
            
            printf("\nDigite o valor da base: \n");
            scanf("%d", &numBase);
        }if(numExponencial < 0){
            printf("\nValor da base invalido...\n");
            
            printf("\nDigite o valor da exponenciação: \n");
            scanf("%d", &numExponencial);
        }
    }

    result = pow(numBase, numExponencial);
    printf("O valor da exponenciacao eh %d elevado a %d = %d", numBase, numExponencial, result);


    return 0;
}