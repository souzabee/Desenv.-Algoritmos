#include<stdio.h>
#include"funcoes.h"

int main(){
    int opcao = menu();
    if(opcao == 1){
        printf("O valor da área é: %.2f\n", circulo());
    }
    else if(opcao == 2){
        printf("O valor da área é: %.2f\n", triangulo());
    }
    else if(opcao == 3){
        printf("O valor da área é: %.2f\n", retangulo());
    }
    else if(opcao == 4){
        printf("Saindo...\n");
    }
    return 0;
}