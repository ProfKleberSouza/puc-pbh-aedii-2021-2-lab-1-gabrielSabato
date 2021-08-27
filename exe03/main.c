#include <stdio.h>
#include "functions.h"

int main()
{
    //DECLARA AS VARIAVEIS.
    int max=0,men,mai,x;
    //APRESENTA A FUNCAO DO ALGORITMO E SOLICITA A ENTRADA DE DADOS.
    printf("Menor elemento de vetor!\n");
    printf("Digite o numero de elementos.\n");
    //ENTRADA DE DADOS.2
    scanf("%d",&max);
    //USO DO FOR PARA PREENCHER O VETOR.
    int vet[max];
    for(x=0;x<max;x++){
        printf("Digite os elementos.\n");
        scanf("%d",&vet[x]);
    }
    //EXECUTA A FUNCAO
    menor_maior(vet,max,men,mai);
    return 0;
}
