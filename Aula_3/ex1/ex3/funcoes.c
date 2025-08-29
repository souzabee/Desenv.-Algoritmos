#include<stdio.h>
#include"funcoes.h"

int idade(){
    int idade;
    scanf("%d", &idade);

    if(idade >= 18){
        printf("Maior de idade, %d\n", idade);
    }

    else{
        printf("Menor de idade, %d\n", idade);
    }

    return idade;

}