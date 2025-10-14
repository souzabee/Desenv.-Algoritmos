#include<stdio.h>

void soma_vetores(int *v1, int *v2, int *resultado
, int tamanho){
    for(int i = 0; i < 5; i++){
        printf("%d ", *(v1 + i));
        
    }
    printf("\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", *(v2 + i));
        
    }
    printf("\n");

    for(int i = 0; i < 5; i++){
        printf("%d ", *(v2 + i) + *(v1 + i));
        
    }
    printf("\n");
}





int main(){

    int a[] = {1, 2, 3, 4, 5};
    int b[] = {10, 20, 30, 40, 50};
    int res[5];
    soma_vetores(a, b, res, 5);


    return 0;
}