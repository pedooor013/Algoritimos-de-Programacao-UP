#include <stdio.h>

int main(){

    int count = 1;
    while(count <= 200){
        if (count % 4 == 0 && count <= 200){
            printf("\n%d eh um numero divisivel por 4 e menor que 200\n", count);
        }
        count++;
    }


    return 0;
}