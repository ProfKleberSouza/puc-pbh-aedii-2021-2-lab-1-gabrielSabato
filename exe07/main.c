#include <stdio.h>
#include "functions.h"

int main()
{
    //DECLARA AS VARIAVEIS.
    int b,e,r;
    //APRESENTA A FUNCAO DO ALGORITMO E SOLICITA A ENTRADA DE DADOS.
    printf("Calculo de MDC!\n");
    printf("Digite os numeros.\n");
    //ENTRADA DE DADOS.
    scanf("%d %d",&b,&e);
    //EXECUTA A FUNCAO
    r = mdc(b,e);
    //IMPRIME RESULTADO
    printf("%d",r);
    return 0;
}
