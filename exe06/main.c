#include <stdio.h>
#include "functions.h"

int main()
{
    //DECLARA AS VARIAVEIS.
    int b,e,r;
    //APRESENTA A FUNCAO DO ALGORITMO E SOLICITA A ENTRADA DE DADOS.
    printf("Potencia de numeros!\n");
    printf("Digite a base.\n");
    //ENTRADA DE DADOS.
    scanf("%d",&b);
    //SOLICITA ENTRADA DE DADOS
    printf("Digite o expoente.\n");
    //ENTRADA DE DADOS
    scanf("%d",&e);
    //EXECUTA A FUNCAO
    r = potencia(b,e);
    //IMPRIME RESULTADO
    printf("%d",r);
    return 0;
}
