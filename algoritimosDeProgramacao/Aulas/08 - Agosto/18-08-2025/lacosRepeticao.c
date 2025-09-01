#include <stdio.h>

int main(){
    fflush(stdin);
    //Existem 3 tipos de laços condicionais 

    //1ª é repetida até que pare de atender a condição
    int numStartUser;
    int numEndUser;


    printf("\nDigite o numero em que a contagem deve iniciar: \n");
    scanf("%d", &numStartUser);
    
    printf("\nDigite a quantidade de vezes que voce quer que repita: \n");
    scanf("%d", &numEndUser);

    while (numStartUser < (numEndUser + 1)){
        //Verifica antes do codigo ser rodada
        printf("Numero %d\n", numStartUser);
        numStartUser++;
    }
    
    /* //2ª a condição é verificada após a repetição 
    int count = 10;
    for (int i = 0; i < count; i++){
        //Repete até que o i seja igual a count
        printf("%d\n", i);
    }
     */
    



    //3ª 


    return 0;
}