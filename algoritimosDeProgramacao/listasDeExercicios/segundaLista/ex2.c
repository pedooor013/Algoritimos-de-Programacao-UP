#include <stdio.h>

int main(){

    int velocidadeViagem, tempoViagem;
    float litrosUsados, distanciaViagem;

    printf("\n===Litragem Gasta===");

    printf("\nQual foi a velocidade media do carro durante a viagem?\n");
    scanf("%d", &velocidadeViagem);

    printf("\nQuanto tempo durou a sua viagem?\n");
    scanf("%d", &tempoViagem);

    distanciaViagem = (float)tempoViagem * velocidadeViagem;
    litrosUsados = distanciaViagem / 12;

    printf("\nA sua velocidade media durante a viagem foi de %dKM/H.\nA viagem durou %d horas\nA distancia ate o destino foi de %.0fKMs\nE utilizou %.0f litros de gasolina!", velocidadeViagem, tempoViagem, distanciaViagem, litrosUsados);

    return 0;
}