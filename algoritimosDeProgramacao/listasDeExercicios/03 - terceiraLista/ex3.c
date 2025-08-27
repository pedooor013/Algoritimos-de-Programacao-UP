#include <stdio.h>
#include <stdio.h>
#include <math.h>

/*ler valores A, B e C
se delta < 0 não é real
se delta > 0 duas soluções 
se delta = 0 uma solução
*/

int main(){
    printf("===Equacao de Segundo Grau===");

    int A, B, C, delta;
    float raizQuadradaDelta, X;
    
    printf("\nDigite o valor de A: \n");
    scanf("%d", &A);

    printf("\nDigite o valor de B: \n");
    scanf("%d", &B);

    printf("\nDigite o valor de C: \n");
    scanf("%d", &C);

    delta = (B*B)-(4*A*C);
    
    printf("\n%d\n",delta);
    raizQuadradaDelta = sqrt(delta);
    if(delta > 0){
        printf("\nTemos 2 resultado com o Delta maior que 0!\n");
        X = ((-B)-raizQuadradaDelta)/2*A;

        printf("\nO resultado caso seja subtraido eh igual a %.2f\n",X);
        X = ((-B)+raizQuadradaDelta)/2*A;

        printf("\nO resultado caso seja somado eh igual a %.2f\n",X);

    }if(delta == 0){
    
        printf("\nTemos 1 resultado com o Delta igual a 0\n");
        
        X = ((-B)+raizQuadradaDelta)/2*A;
        
        printf("\nO resultado eh igual a %.2f\n", X);
    
    }if(delta < 0){
    
        printf("\nNao temos um resultado real com o Delta negativo\n");
    
    }

}
