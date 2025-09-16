#include <stdio.h>

int main(){

    char nomeUser[100], nomeUserDois[100], nomeUserInvertido[100], caracterNulo = '\0';

    int contadorDeCaracteres = 0, count = 0;

    printf("Digite seu nome completo: \n");
    gets(nomeUser);

    do{
        contadorDeCaracteres++;
    }while(nomeUser[contadorDeCaracteres] != caracterNulo);

    for(count = 0; count <= contadorDeCaracteres; count++){
        printf("%c", nomeUser[count]);
        nomeUserDois[count] = nomeUser[count];
    }

    
    for(int i = 0; i < contadorDeCaracteres; i++){
        nomeUserInvertido[i] = nomeUser[contadorDeCaracteres - 1 - i];
    }
    nomeUserInvertido[contadorDeCaracteres] = '\0';

    

    printf("\nEsse eh o segundo array %s e esse eh o primeiro %s \n", nomeUserDois, nomeUser);
    printf("\nE esse eh o invertido: %s", nomeUserInvertido);
    printf("\nE contem %d caracteres!", contadorDeCaracteres);

    /* printf("\n%s contem %d caracteres\n",nomeUser, contadorDeCaracteres);*/

    return 0;
}