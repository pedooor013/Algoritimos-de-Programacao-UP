/* 
03) Elaborar um programa que leia uma matriz A do tipo vetor com 15 elementos inteiros. Construir uma matriz
B de mesmo tipo, e cada elemento da matriz B deve ser o resultado da fatorial correspondente de cada
elemento da matriz A. Apresentar as matrizes A e B.
*/
#include <stdio.h>

int main(){
    int contagemDeRepeticoes = 3;
    int vetorOriginal[contagemDeRepeticoes], vetorFatorial[contagemDeRepeticoes], count = 0, vlrArray;

    for(int i = 0; i < contagemDeRepeticoes; i++){
        printf("\nDigite um numero: \n");
        scanf("%d", &vetorOriginal[i]);

        vetorFatorial[i] = vetorOriginal[i];
        vlrArray = vetorOriginal[i] - 1;

        while(vlrArray > 0){
            vetorFatorial[i] = vetorFatorial[i] * vlrArray;
            vlrArray--;
            printf("\nValor do fatorial: %d\nValor da contagem: %d\n", vetorFatorial[i], vlrArray);
            count++;
        }
        count = 0;
    }
    while (count < contagemDeRepeticoes)
    {
        printf("\n%d - O fatorial de %d eh igual a %d\n", count+1, vetorOriginal[count], vetorFatorial[count]);
        count++;
    }
    
}