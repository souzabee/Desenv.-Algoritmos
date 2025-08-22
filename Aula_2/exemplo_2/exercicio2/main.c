#include <stdio.h>
#include "numeros.h"

int main(){
    int a = 4;
    int b = 8;
    int exp = a;

    printf("Potência: %d\n", potencia(a, exp));
    printf("Fatorial: %d\n", fatorial(a));

    if(maior(a, b)){
        printf("O numero maior é: %d\n", a);
    }
    else {
        printf("O número maior é: %d\n", b);
    }
    
    if(primo(a)){
        printf("É primo!\n");
    }
    else {
        printf("Não é primo!\n");
    }
    
    if (par(a) == 0) {
        printf("É par! \n");
    }
    else {
        printf("não é par! \n");
    }

    
    
    return 0;
}