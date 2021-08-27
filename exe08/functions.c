
#include "functions.h"
#include <string.h>

void palindromo(char texto[]){
    int tam;
    double pal;
    tam = strlen(texto)-1;
    for(int i=tam;i>0;i--){
        for(int j=0;j<tam;j++){
            if(texto[i]!=texto[j]){
                pal = 0;
            }
            else{
                pal = 1;
            }
        }
    }
    if(pal == 1){
        printf("SIM");
    }
    else{
        printf("NAO");
    }
}
