#include <stdio.h>

int main(){
    int t = 8, maior = 0, menor = 1000000, menor_posicao, maior_posicao, x = 0;
    int lista[t];

    for (int x = 0; x < t; x++){
        printf("Digite o número %d: ", x + 1);
        scanf("%d", &lista[x]);


        if(maior < lista[x]){
            maior = lista[x];
            maior_posicao = x;
            
        }

        if(menor > lista[x]){
            menor = lista[x];
            menor_posicao = x;
            
        }

    }
    
    printf("maior numero: %d / na posicao: %d ", maior, maior_posicao);
    printf("\nmenor numero: %d / na posicao: %d", menor, menor_posicao);
    return 0;
}