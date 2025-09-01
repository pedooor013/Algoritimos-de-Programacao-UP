#include <stdio.h>

int main(){
    printf("\n===Verificador de Media e Salario===\n");

    int numFaltas, ganhouMegaSena;
    float salarioUser, mediaUser;
    
    printf("\nDigite a sua media:\n");
    scanf("%f", &mediaUser);

    printf("\nDigite as suas faltas:\n");
    scanf("%d", &numFaltas);

    printf("\nDigite o seu salario:\n");
    scanf("%f", &salarioUser);

    printf("\nVoce ganhou na MegaSena (1 = sim; 2 = nao):\n");
    scanf("%d", &ganhouMegaSena);
    
    
    if((numFaltas <= 15 && mediaUser >= 6) && (salarioUser >= 60000 || ganhouMegaSena == 1)){
        printf("\nUma boa viagem para a Europa!\n");
    }else{
        printf("\nViagem cancelada!\n");
    }




    return 0;
}