#include <stdio.h>

int main(){

    int  num1, num2, result;
    num1 = 0;
    num2 = 1;
    result = 0;

    int i = 1;
    while(i <= 15){

        printf("%d, ", num1);
        result = num1 + num2;
        num1 = num2;
        num2 = result;

        i++;
    }


    return 0;
}

/* 5. Escrever um programa que apresente os valores da sequência numérica de Fibonacci até o décimo quinto
termo. A sequência de Fibonacci é formada por 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, ... etc.,
obtendo-se o próximo termo a partir da soma do termo atual com o anterior sucessivamente até o infinito se
a sequência não for interrompida.
 */