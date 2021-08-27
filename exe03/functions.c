
#include "functions.h"

void menor_maior(int v[],int n, int *menor, int *maior){
    menor = v[1];
    maior = v[1];
    //USA FOR E IF PARA VERIFICAR MAIOR E MENOR ELEMENTO
    for(int i=0;i<n;i++){
        if(v[i]<menor){
            menor = v[i];
        }
        else if(v[i]>maior){
            maior = v[i];
        }
    }
    //IMPRIME OS VALORES
    printf("MENOR = %d\n",menor);
    printf("MAIOR = %d\n",maior);
}

