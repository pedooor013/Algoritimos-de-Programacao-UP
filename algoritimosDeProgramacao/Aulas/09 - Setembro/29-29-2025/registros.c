#include <stdio.h>

struct Produto{
    int codigo;
    char nome[30];
    char categoria;
    double valor;
};

int main(){
    struct Produto produtos[5];

    for(int count = 0; count < 5; count++){
        printf("Digite as informacoes do %d produto: \n", count+1);
        printf("Digite o codigo do produto: ");
        scanf("%d", &produtos[count].codigo);
        printf("Digite o nome do produto: ");
        scanf(" %[^\n]", produtos[count].nome);
        printf("Digite a categoria do produto: ");
        scanf(" %c", &produtos[count].categoria);
        printf("Digite o valor do produto: ");
        scanf("%lf", &produtos[count].valor);   
    }
    for(int count = 0; count < 5; count++){
        printf("\n\n%d produto:\n", count+1);        
        pr0intf("Cod: %d\n", produtos[count].codigo);
        printf("Nome: %s\n", produtos[count].nome);
        printf("Cat: %c\n", produtos[count].categoria);
        printf("Cod: %lf\n", produtos[count].valor);
        printf("====================================");
    }
    return 0;
}