#include <stdio.h>

int main(){

    float vlrHoraAula, descontoINSS, salarioBruto, horasTrabalhadas;

    printf("Digite o valor da sua hora aula: \n");
    scanf("%f", &vlrHoraAula);

    printf("Qual a quantidade de horas que você trabalha no mes?");
    scanf("%f", &horasTrabalhadas);

    salarioBruto = vlrHoraAula*horasTrabalhadas;

    if(salarioBruto < 1518.00){
        descontoINSS = (7.5/100)*salarioBruto;
    }
    else if(salarioBruto < 2793.89){
        descontoINSS = (9/100)*salarioBruto;
    }
    else if(salarioBruto < 4190.84){
        descontoINSS = (12 / 100)*salarioBruto;
    }
    else{
        descontoINSS = (14 / 100)*salarioBruto;
    }

    float salarioLiquido = salarioBruto - descontoINSS;

    printf("O seu salario liquido no mes eh de %.2f", salarioLiquido);

    return 0;
}