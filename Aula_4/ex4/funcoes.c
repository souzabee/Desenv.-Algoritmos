#include <stdio.h>
#include "funcoes.h"
int menu(){
    int opcao;
    while(1) {
        printf("\n1) Quadrado de um número\n");
        printf("2) Cubo de um número\n");
        printf("3) Sair\n");
        printf("\nDigite sua opção: ");
        scanf("%d", &opcao);

        if(opcao >= 1 && opcao <= 3){
            return opcao;
        }
        else if(opcao == 3){
            break;
        }
        printf("Opção inválida!\n");


    }
}

int quadrado(){
    int n;
    printf("Digite o número: ");
    scanf("%d", &n);
    return n * n;
}

int cubo(){
    int n;
    printf("Digite o número: ");
    scanf("%d", &n);
    return n * n * n;
}


