#include "numeros.h"
int par(int a){
    return a % 2;
}

int fatorial(int a){
    int i, resultado = 1;
    for(i = 1; i <= a; i++){
        resultado *= i;
    }
    return resultado;
}