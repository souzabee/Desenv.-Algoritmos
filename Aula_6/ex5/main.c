#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


int extrair_numeros(char *str , int numeros[]){
    int count = 0, num = 0, i = 0;
    while(str[i] != '\0'){
        if(isdigit(str[i])){
            int num = 0;
            while(isdigit(str[i])){
                num = num * 10 + (str[i] - '0');
                i++;
            }
            numeros[count++] = num;
        }else{
            i++;
        }
    }
    return count;
}

int main(){
    char texto[] = "O aluno tirou 8 em 2 matérias que tinham 5 notas";
    int numeros[100];
    int qtd = extrair_numeros(texto, numeros);
    printf("%s\n", texto);
    
    int i = 1;
    for(i = 0; i < qtd; i++){
        printf("%d\n", numeros[i]);
    }
    printf("%d\n", i);
    return 0;
}