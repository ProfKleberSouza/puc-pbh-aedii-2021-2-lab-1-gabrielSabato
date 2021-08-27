#include <stdio.h>
#include <string.h>
#include "functions.h"

int main()
{
    //DECLARA AS VARIAVEIS.
    char palavra[50];
    //APRESENTA A FUNCAO DO ALGORITMO E SOLICITA A ENTRADA DE DADOS.
    printf("Inverte palavra!\n");
    printf("Digite a palavra.\n");
    //ENTRADA DE DADOS.
    fflush(stdin);
    gets(palavra);
    //EXECUTA A FUNCAO
    inverte(palavra);
    return 0;
}
