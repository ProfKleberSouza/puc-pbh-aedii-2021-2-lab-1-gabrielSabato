
#include "functions.h"

int menor(int v[],int m){
    int menor = v[1];
    //USA FOR E IF PARA ENCONTRAR MENOR ELEMENTO
    for(int i=0;i<m;i++){
        if(v[i]<menor){
            menor = v[i];
        }
    }
    return menor;
}
