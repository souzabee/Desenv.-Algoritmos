#include<stdio.h>

int main(){
    int v[] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++){
        printf("%d ", *(v + i));
    }


    return 0;
}