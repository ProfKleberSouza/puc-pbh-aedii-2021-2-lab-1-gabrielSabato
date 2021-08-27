#include <stdio.h>
#include <string.h>
#include "functions.h"

int main()
{
    //DECLARA AS VARIAVEIS.
    char palavra[50];
    //APRESENTA A FUNCAO DO ALGORITMO E SOLICITA A ENTRADA DE DADOS.
    printf("Verifica se e palindromo!\n");
    printf("Digite a palavra\n");
    //ENTRADA DE DADOS.
    gets(palavra);
    //EXECUTA A FUNCAO
    palindromo(palavra);
    return 0;
}
