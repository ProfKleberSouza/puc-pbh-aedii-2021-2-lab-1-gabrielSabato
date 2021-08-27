#include <stdio.h>
#include "functions.h"

int main()
{
    //DECLARA AS VARIAVEIS.
    int n1,n2,s;
    //APRESENTA A FUNCAO DO ALGORITMO E SOLICITA A ENTRADA DE DADOS.
    printf("Soma de dois numeros!\n");
    printf("Digite dois numeros.\n");
    //ENTRADA DE DADOS.
    scanf("%d %d",&n1, &n2);
    //EXECUTA A FUNCAO
    s = soma(n1,n2);
    //IMPRIME A RESPOSTA
    printf("SOMA = %d",s);
    return 0;
}
