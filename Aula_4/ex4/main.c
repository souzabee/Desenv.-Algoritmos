#include <stdio.h>
#include "funcoes.h"
int main(){
    while(1){
        int opcao = menu();
        if (opcao == 1){
            printf("O número ao quadrado é: %d\n", quadrado());
        }
        else if (opcao == 2){
            printf("O número ao cubo é: %d\n", cubo());
        }
        else if (opcao == 3){
            printf("Adeus!\n");
            break;
        }
    }    
    return 0;
}