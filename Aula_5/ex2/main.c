#include <stdio.h>

int main(){
    int tamanho = 10, soma = 0;
    int lista[tamanho];
    for(int x = 0; x < tamanho; x++){
        printf("Digite o valor %d: ", x + 1);
        scanf("%d", &lista[x]);
        if(lista[x] >= 0){
            soma = soma + lista[x];

        }
    }
    for(int x = 0; x < tamanho; x++){
        printf("%d ", lista[x]);

        
    }

    printf("\n%d", soma);
    return 0;
}