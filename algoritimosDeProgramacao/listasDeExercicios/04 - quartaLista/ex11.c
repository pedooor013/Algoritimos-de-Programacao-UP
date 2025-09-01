#include <stdio.h>

int main(){

    int count, result, countFatorial;

    result = 1;
    count = 1;
    do{
        countFatorial = count;
        result = count;
        if(count%2 != 0){
            while (countFatorial > 1){
                printf("\nEsse eh o result = %d \n Esse eh o countFatorial = %d\n", result, countFatorial);
                    result = result * (countFatorial-1);

                countFatorial--;
            }            
            printf("\n!%d = %d\n", count, result);
        }
        count++;
    }while(count <= 10);

    return 0;
}