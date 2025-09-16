//main1.c
#include<stdio.h>
#include"calculadora.h"

int main(){
    float a = 10, b = 5;
    printf("Soma: %f\n", soma(a, b));
    printf("Sub: %f\n", sub(a, b));
    printf("Multiplicacao: %f\n", multi(a, b));
    

    if (divisao_valida(b)) {
        printf("Divisao: %f\n", divisao(a, b));
    }
    else {
        printf("Divisao invalida\n");
    }
    return 0;
}
