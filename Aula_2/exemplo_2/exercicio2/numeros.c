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

int potencia (int a, int exp){
    int pot = 1;
    for(int i = 1; i <= exp; i++){
        pot = pot * a;

        
    }
    return pot;
}

int primo(int a){
    int i;
    for(i = 2; i < a; i++){
        if(a % i == 0){
            return 0;
        }
    }
    return 1;
}

int maior(int a, int b){
    if (a >= b){
        return 1;
    }
    return 0;
}