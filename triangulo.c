#include <stdio.h>

int main(){

    int count = 1;

    for(int i = 0; i <= 10; i++){

        while(count <= i){
            printf("*");
            count++;
        }
        printf("\n");
        count = 1;
    }

    return 0;
}