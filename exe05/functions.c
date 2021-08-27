
#include "functions.h"
#include <string.h>

void inverte(char texto[]){
    int max;
    max = strlen(texto);
    for(int i = max-1;i>=0;i--){
        printf("%c",texto[i]);
    }
}
