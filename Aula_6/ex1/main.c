#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int conta_caracteres(char *s, char c){
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++){
        printf("%c", s[i]);
        if(s[i] == c){
            count++;
            

        }

    }
    return count;
}

int main(){
    int x = conta_caracteres("o rato roeu a roupa", 'o');
    printf("\n%d\n", x);

    return 0;
}