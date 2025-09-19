#include<stdio.h>

int main(){
    int linhas = 4;
    int colunas = 4;
    int soma_linha = 0;
    int matriz[linhas][colunas];
    
    for(int linha = 0; linha < linhas; linha++){
        soma_linha = 0;
        for(int coluna = 0; coluna < colunas; coluna++){
            printf("Digite o elemento [%d][%d]: ", linha + 1, coluna + 1);
            scanf("%d", &matriz[linha][coluna]);
            }
    }

    for(int linha = 0; linha < linhas; linha++){
        soma_linha = 0;
        for(int coluna = 0; coluna < colunas; coluna++){
            soma_linha = soma_linha + matriz[linha][coluna];
            }
        printf("soma da linha %d: %d\n", linha + 1, soma_linha);
    }

    for(int coluna = 0; coluna < colunas; coluna++){
        int soma_coluna = 0;
        for(int linha = 0; linha < linhas; linha++){
            soma_coluna = soma_coluna + matriz[linha][coluna];
            }
        printf("soma da coluna %d: %d\n", coluna + 1, soma_coluna);
    }

    for(int linha = 0; linha < linhas; linha++){
        for(int coluna = 0; coluna < colunas; coluna++){
            printf("%d\t", matriz[linha][coluna]);
            }
        printf("\n");
    }

    return 0;
}