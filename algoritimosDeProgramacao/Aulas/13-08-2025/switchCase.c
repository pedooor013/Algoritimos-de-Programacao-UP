#include <stdio.h>

int main()
{
    /*
        Codigo para representar como deve ser feito um switch case em C
    */
    int escolhaUsuario, numEscolhidoUsuario, segundoNumUser, quadradoNumUser, senhaUser;
    int senha = 1308;
    printf("\nDescubra a senha numerica para avancar: \nSenha: \n");
    scanf("%d", &senhaUser);

    if (senhaUser == senha)
    {
        printf("\n\n===Voce descobriu a senha===\n\n");
        printf("\nDigite um numero: \n");
        scanf("%d", &numEscolhidoUsuario);

        printf("\nEscolha uma operacao para fazer com o numero escolhido: \n01) Verificar se eh par ou impar\n02) Encontrar o quadrado do numero\n03)Divisao entre 2 numeros\n\nResposta usuario: \n");
        scanf("%d", &escolhaUsuario);

        switch (escolhaUsuario)
        {
        case 1:
            if (numEscolhidoUsuario % 2 == 0)
            {
                printf("\n%d eh par!\n", numEscolhidoUsuario);
            }
            else
            {
                printf("\n%d eh impar!\n", numEscolhidoUsuario);
            }
            break;
        case 2:
            quadradoNumUser = numEscolhidoUsuario * numEscolhidoUsuario;
            printf("\nO quadrado de %d eh %d\n", numEscolhidoUsuario, quadradoNumUser);
            break;
        case 3:
            printf("\nDigite outro numero: \n");
            scanf("%d", &segundoNumUser);
            float resultOperacao = (float)numEscolhidoUsuario / segundoNumUser;
            printf("\n%d / %d = %.2f\n", numEscolhidoUsuario, segundoNumUser, resultOperacao);
            break;
        default:
            printf("\nDigite um valor valido...\n");
        }
    }else{
        printf("Tente novamente...");
        main();
    }
    return 0;
}