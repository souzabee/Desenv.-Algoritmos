#include<stdio.h>

int main(){
    int t = 15;
    int lista[t];
    int pares[15];
    int impares[15];
    int contaPares = 0;
    int contaImpares = 0;
    for(int x = 0; x < t; x++){
        printf("Digite o numero %d: ", x + 1);
        scanf("%d", &lista[x]);

        if(lista[x] % 2 == 0){
            pares[contaPares] = lista[x];
            contaPares++;
            
        }
        
    }

    for(int x = 0; x < t; x++){
        printf("%d _ ", pares[x]);
    }
    return 0;
}