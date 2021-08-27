#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main()
{
    //DECLARA AS VARIAVEIS.
    int max=0,men,x;
    //APRESENTA A FUNCAO DO ALGORITMO E SOLICITA A ENTRADA DE DADOS.
    printf("Menor elemento de vetor!\n");
    printf("Digite o numero de elementos.\n");
    //ENTRADA DE DADOS.
    scanf("%d",&max);
    //DECLARA VARIAVEL VET E USA DO FOR PARA PREENCHER O VETOR.
    int vet[max];
    for(x=0;x<max;x++){
        printf("Digite os elementos.\n");
        scanf("%d",&vet[x]);
    }
    //EXECUTA A FUNCAO
    men = menor(vet,max);
    //IMPRIME A RESPOSTA
    printf("MENOR = %d",men);
    return 0;
}
