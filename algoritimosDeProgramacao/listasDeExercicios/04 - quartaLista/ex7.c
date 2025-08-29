#include <stdio.h>

int main(){

    float grausCelsius, grausFahrenheit;
    
    grausCelsius = 10;

    while(grausCelsius <= 100){
        grausFahrenheit = (grausCelsius * 9/5) + 32;

        printf("\n%.2f graus celsius = %.2f graus fahrenheit\n", grausCelsius, grausFahrenheit);
        grausCelsius = grausCelsius + 10;
    }

    return 0;
}