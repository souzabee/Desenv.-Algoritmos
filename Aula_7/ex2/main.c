#include<stdio.h>

void troca (int *a, int *b){
    printf("Valor recebido de x = %d, y = %d\n", *a, *b);
    *a = 8, *b = 2;

}

int main(){
    
    
    int x = 5, y = 10;
    printf("Antes: x = %d, y = %d\n", x, y);
    troca(&x, &y);
    printf("Depois: x = %d, y = %d\n", x, y);

    
    
    return 0;
}