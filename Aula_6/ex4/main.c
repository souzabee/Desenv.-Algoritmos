#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void formatar_nome(char *nome){
    int i = 0, j = 0;
    while(nome[i] == ' '){
        i++;
        
    }
    while(nome[i] != '\0'){
        nome[j] = nome[i];
        j++;
        i++;
    }
    nome[j] = '\0';

    i = 0;
    while(nome[i] != ' '){
        i++;
    }
    j = i + 1;
    while(nome[j] == ' '){
        j++;
    }
    while(nome[j] != '\0'){
        nome[i + 1] = nome[j];
        i++;
        j++;
    }
    nome[i + 1] = '\0';

}

int main(){
    char nome[] = "      AA    aaaAAA";
    formatar_nome(nome);
    printf("%s\n", nome);
    return 0;    
}