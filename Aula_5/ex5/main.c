#include<stdio.h>

int main(){
    int t = 10;
    int lista[t];
    int num;
    for(int x = 0; x < t; x++){
        printf("Digite o numero %d: ", x + 1);
        scanf("%d", &lista[x]);

        }

        printf("Digite um numero para buscar: ");
        scanf("%d", &num);
        for(int x = 0; x < t; x++){
            if(num == lista[x]){
                printf("Numero %d encontrado na posicao %d", lista[x], x);

            }
        }
    return 0;
}