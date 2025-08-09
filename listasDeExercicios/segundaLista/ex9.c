#include <stdio.h>

int porcentagem(int numComparativo, int numTotal){
    float porcentagem;
    porcentagem = (((float)numComparativo)/100)*numTotal;
    
    return(porcentagem);
}


int main(){
    printf("\n===Eleicao Sindicalista===\n");

    int votosTotal, votosNulos, votosBranco, votosACandidato, votosBCandidato, votosCCandidato;
    
    float perceitualTotal, percentualA, percentualB, percentualC, percentualVotosBrancos, porcentagemVotosValidos, porcentagemVotosBranco, porcentagemVotosNulos;

    printf("\nDigite quantos votos o candidato A teve: \n");
    scanf("%d", &votosACandidato);

    printf("\nDigite quantos votos o candidato B teve: \n");
    scanf("%d", &votosBCandidato);

    printf("\nDigite quantos votos o candidato C teve: \n");
    scanf("%d", &votosCCandidato);

    printf("\nDigite quantos votos foram nulos: \n");
    scanf("%d", &votosNulos);

    printf("\nDigite quantos votos foram em branco: \n");
    scanf("%d", &votosBranco);

    votosTotal = votosACandidato + votosBCandidato + votosCCandidato + votosNulos + votosBranco;

    int totalVotosValidos = votosACandidato, votosBCandidato, votosCCandidato;

    porcentagemVotosValidos = porcentagem(totalVotosValidos, votosTotal); 
    
    percentualA = porcentagem(votosACandidato, votosTotal);
    printf("\nDe %d  %%.2f foram votos para o candidato A\n", votosTotal, percentualA);
    
    percentualB = porcentagem(votosBCandidato, votosTotal);
    printf("\nDe %d  %%.2f foram votos para o candidato B\n", votosTotal, percentualB);
    
    percentualC = porcentagem(votosCCandidato, votosTotal);
    printf("\nDe %d %.2f% foram votos para o candidato C\n", votosTotal, percentualC);
    
    porcentagemVotosNulos = porcentagem(votosNulos, votosTotal);
    printf("\nDe %d %.2f% foram votos nulos\n", votosTotal, porcentagemVotosNulos);
    
    porcentagemVotosBranco = porcentagem(votosBranco, votosTotal);
    printf("\nDe %d %.2f% foram votos em branco\n", votosTotal, porcentagemVotosBranco);

    return 0;
}