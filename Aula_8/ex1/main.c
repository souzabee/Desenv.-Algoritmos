#include<stdio.h>


int main(){
    FILE *f = fopen("arquivo.txt", "w");
    if(f == NULL){
        printf("Erro ao abrir");
        return 1;
    }
    int x = 0;
    int sum = 0;
    for(int i = 0; i < 5; i++){
        scanf("%d", &x);
        fprintf(f, "%d\n", x);
    }

    fclose(f);
    
    f = fopen("arquivo.txt", "r");
    fscanf(f, "%d", &x);
    sum = sum + x;
    printf("%d", sum);

    return 0;
}