#include <stdio.h>

int main(){

    int result;

    result = 0;

    for(int i = 0; i <=100; i++){
        result = result+i;
    }
    printf("\nA soma de 0 ate 100 eh igual a %d\n", result);

    return 0;
}