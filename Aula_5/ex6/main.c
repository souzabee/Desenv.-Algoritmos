#include<stdio.h>

int main(){
    int linhas = 3;
    int colunas = 3;
    int matriz[linhas][colunas];

    for(int linha = 0; linha < linhas; linha++){
        for(int coluna = 0; coluna < colunas; coluna++){
            printf("Digite o elemento [%d][%d]: ", linha + 1, coluna + 1);
            scanf("%d", &matriz[linha][coluna]);
                
        }
    }

    for(int linha = 0; linha < linhas; linha++){
        for(int coluna = 0; coluna < colunas; coluna++){
            printf("%d\t", matriz[linha][coluna]);
        
        }
    printf("\n");
    }
    return 0;
}