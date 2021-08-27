
#include "functions.h"

int mdc(int x, int n){
    if(x < n){
        return mdc(n,x);
    }
    else{
        if (x % n == 0){
            return n;
        }
        else{
            return mdc(n, x%n);
        }
    }
    }
