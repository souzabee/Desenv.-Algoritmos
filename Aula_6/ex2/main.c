#include <stdio.h>
#include<stdlib.h>
#include<string.h>


int inverte_string(char *s){
    char *inicio = s;
    char *fim = s + strlen(s) - 1;
    char tmp;
    while(inicio < fim){
        tmp = *inicio;
        *inicio = *fim;
        *fim = tmp;
        inicio++; fim--;
    }
}

int main(){
    char s[] = "banana";
    printf("%s\n", s);
    inverte_string(s);
    printf("%s\n", s);

    return 0;
}