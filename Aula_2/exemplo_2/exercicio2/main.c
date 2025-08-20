#include <stdio.h>
#include "numeros.h"

int main(){
    int a = 5;
    
    if (par(a) == 0) {
        printf("É par! %d\n");
    }
    else {
        printf("não é par! %d\n");
    }
    
    return 0;
}