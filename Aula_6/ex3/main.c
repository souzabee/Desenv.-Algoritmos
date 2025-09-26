#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

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

void limpa_string(char *str){
    int i, j = 0, tam = strlen(str);
    for(i = 0; i < tam; i++){
        if(str[i] != ' '){
            str[j] = tolower(str[i]);
            j++;
        }
    }
    str[j] = '\0';

}

int e_palindromo(char *str){
    int tam = strlen(str);
    char cpy[tam + 1];
    strncpy(cpy, str, tam + 1);
    inverte_string(cpy);
    return !strcmp(str, cpy);


}
int main(){
    char s[] = "abobora";
    limpa_string(s);
    inverte_string(s);
    printf("%s\n", s);
    printf("%s\n", s);
    printf("%d\n", e_palindromo(s));
    return 0;
}