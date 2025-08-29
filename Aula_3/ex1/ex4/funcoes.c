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
    
    case 3:
        if(y == 0){
            printf("Divisão por 0, inválida\n");
            break;
        }
        calculo = x / y;
        return calculo;
        break;
    
    case 4:
        calculo = x * y;
        return calculo;
        break;

    default:
        printf("Operação inválida\n");
        return 0;
        break;
    }
}