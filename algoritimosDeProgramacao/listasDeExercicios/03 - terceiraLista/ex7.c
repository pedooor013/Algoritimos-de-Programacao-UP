#include <stdio.h>

int main(){
    printf("\n===Verificador de Par ou Impar===\n");

    int num1;

    printf("\nDigite um numero: \n");
    scanf("%d", &num1);

    if(num1%2==0){
        printf("\nO numero %d eh par\n", num1);
    }else{
        printf("\nO numero %d eh impar\n", num1);
    }

    return 0;
}
