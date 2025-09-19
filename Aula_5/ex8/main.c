#include<stdio.h>

int main(){
    int linhas = 3;
    int colunas = 3;
    int sum = 0;
    int matriz[linhas][colunas];
    for(int linha = 0; linha < linhas; linha++){
        for(int coluna = 0; coluna < colunas; coluna++){
            printf("digite o elemento [%d][%d]: ", linha + 1, coluna + 1);
            scanf("%d", &matriz[linha][coluna]);

            if(coluna == linha){
                sum += matriz[linha][coluna];

            }
        }
    }

    printf("%d\n", sum);
    return 0;
}