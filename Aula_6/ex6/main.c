#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void substituir_primeira_palavra(char *str, char *antiga, char *nova, char *resultado){
    char *pos = strstr(str, antiga);
    if(pos != NULL){
        int pos_inicio = pos - str;
        strncpy(resultado, str, pos_inicio);
        resultado[pos_inicio] = '\0';
        strcat(resultado, nova);
        strcat(resultado, str + pos_inicio + strlen(antiga));
    }
}

int main(){
    char texto[] = "O gato morreu";
    char antiga[] = "gato";
    char nova[] = "cachorro";
    char resultado[200];
    substituir_primeira_palavra(texto, antiga, nova, resultado);
    printf("%s\n", texto);
    printf("%s\n", antiga);
    printf("%s\n", nova);
    printf("%s\n", resultado);

    return 0;
}