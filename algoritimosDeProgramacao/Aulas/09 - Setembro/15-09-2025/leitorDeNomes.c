#include <stdio.h>
#include <string.h>


int main(){

    int qntDeUsuariosFixo = 0, contadorUsuarios;

    printf("\nDigite quantos usuarios voce quer usar: \n");
    scanf("%d", &qntDeUsuariosFixo);
    getchar();

    char nomeUser[qntDeUsuariosFixo][100], nomeUserInvertido[qntDeUsuariosFixo][100], caracterNulo = '\0';
    
    int contadorDeCaracteres[qntDeUsuariosFixo];
    
    for(contadorUsuarios = 0; contadorUsuarios < qntDeUsuariosFixo; contadorUsuarios++){

    contadorDeCaracteres[contadorUsuarios] = 0;

    printf("Digite o %d nome completo: \n", contadorUsuarios+1);
    fgets(nomeUser[contadorUsuarios], 100, stdin);

    do{
        contadorDeCaracteres[contadorUsuarios]++;
    }while(nomeUser[contadorUsuarios][contadorDeCaracteres[contadorUsuarios]] != caracterNulo);

    
    for(int i = 0; i < contadorDeCaracteres[contadorUsuarios]; i++){
        nomeUserInvertido[contadorUsuarios][i] = nomeUser[contadorUsuarios][contadorDeCaracteres[contadorUsuarios] - 1 - i];
    }
    nomeUserInvertido[contadorUsuarios][contadorDeCaracteres[contadorUsuarios]] = '\0';
    
}
for(int count = 0; count < qntDeUsuariosFixo; count++){
    printf("%d nome:\n", count);
    printf("\nEsse foi o nome digitado: %s", nomeUser[count]);
    printf("\nE esse eh o invertido: %s", nomeUserInvertido[count]);
    printf("\nE contem %d caracteres!\n\n", contadorDeCaracteres[count]);
}
return 0;
}