#include<stdio.h>
#include"funcoes.h"

int calc(){
    int x, y, op;
    scanf("%d", &op);
    scanf("%d", &x);
    scanf("%d", &y);

    switch (op)
    {
    case 1:
        int calculo = x + y;
        printf("Valor: %d\n", calculo);
        return calculo;
        break;
    
    case 2:
        calculo = x - y;
        return calculo;
        break;
    
    default:
        printf("Nao");
        break;
    }
}