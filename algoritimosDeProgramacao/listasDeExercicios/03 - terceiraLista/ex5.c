#include <stdio.h>

int main(){
    printf("\n===Apresentar Valores Divisiveis por 2 e 3===\n");

    int arrNumUser[4];

    printf("\nDigite um numero: \n");
    scanf("%d", &arrNumUser[0]);

    printf("\nDigite um numero: \n");
    scanf("%d", &arrNumUser[1]);

    printf("\nDigite um numero: \n");
    scanf("%d", &arrNumUser[2]);

    printf("\nDigite um numero: \n");
    scanf("%d", &arrNumUser[3]);


    for(int count = 0; count<4;count++){
        if(arrNumUser[count]%2 == 0 && arrNumUser[count]%3 == 0){
            printf("%d, ", arrNumUser[count]);
        }
    }

    return 0;
}