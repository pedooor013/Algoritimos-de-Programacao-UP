#include <stdio.h>

int main(){

    int distancia;
    float raio, areaCircunferencia;
    float pi = 3.1415;
    
    printf("Qual a distancia da circunferencia? \n");
    scanf("%d", &distancia);

    raio = (float)distancia/2;

    areaCircunferencia = pi*(raio*raio);
    
    printf("A area da circunferencia eh %.2f", areaCircunferencia);

    return 0;
}