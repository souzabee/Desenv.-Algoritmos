#include<stdio.h>

void estatisticas(int *v, int tamanho, int *maior, int *
menor, float *media){
    *maior =  *v, *menor = *v;
    float soma = 0;
    for(int i = 0; i < 5; i++){
        if(*(v + i) > *maior){
            *maior = *(v + i);
        }

        if(*(v + i) < *menor){
            *menor = *(v + i);
        }

        soma = soma + *(v + i);
    }

    *media = soma / tamanho;
    
}


int main(){
    int array[] = {1, 2, 3, 4, 5};
    int maior;
    int menor;
    float media;
    estatisticas(array, 5, &maior, &menor, &media);
    return 0;

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Média: %.2f\n", media);
}