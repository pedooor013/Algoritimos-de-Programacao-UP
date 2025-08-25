#include <stdio.h>

int main(){

    printf("\n===Calculo de Desconto Mensalidade===\n");

    int pagamentoEmDia, filhoDeFuncionario; 

    float vlrMensalidade;

    printf("\nFilho de Funcionario (1-SIM; 2-NAO):\n");
    scanf("%d", &filhoDeFuncionario);

    printf("\nPagamento em dia (1-SIM; 2-NAO):\n");
    scanf("%d", &pagamentoEmDia);

    printf("\nDigite o valor da mensalidade:\n");
    scanf("%f", &vlrMensalidade);
    
    if(pagamentoEmDia == 1 || filhoDeFuncionario == 1){
        if(pagamentoEmDia == 1){
            vlrMensalidade = vlrMensalidade - (0.054 * vlrMensalidade);
        }
        if(filhoDeFuncionario == 1){
            vlrMensalidade = vlrMensalidade - (0.5 * vlrMensalidade);
        }
    }

    printf("A sua mensalidade eh de R$%.2f", vlrMensalidade);

    return 0;
}

/* 14. Uma escola fornece 5% de desconto para pagamento da mensalidade em dia. A escola ainda fornece, além 
deste desconto, um desconto adicional de 50% na mensalidade para filh'os de funcionários. Faça um programa
que receba os dados de matrícula, valor da mensalidade e se o pagamento foi feito em dia ou não. Após isto
calcule o programa deverá ler um código que identifique se o aluno é filho de funcionário (1) ou aluno comum
(2) e com base nisso, utilize uma estrutura de múltipla escolha para calcular o valor a ser pago na mensalidade.
 */