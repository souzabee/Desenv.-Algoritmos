#include<stdio.h>

int main(){
    for (int i = 0; i <= 20; i++){
        if (i % 2 != 0){
            printf("%d\n", i);
            continue;
        }
        else if(i >=15){
            break;
        }
        

    }
    return 0;
}