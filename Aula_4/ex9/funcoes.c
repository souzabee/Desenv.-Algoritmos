#include<stdio.h>
#include"funcoes.h"

int num(){
    int num, acum = 0, cont = 0;
    while(1){

        do{
        printf("Digite um número: ");
        scanf("%d", &num);
    }while(num < 1 || num > 100);
    if(num == 0){
        break;
    }
    acum += num;
    cont++;
    
    }
    return acum / cont;
}