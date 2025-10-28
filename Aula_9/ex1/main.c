#include<stdio.h>

int main(){
    typedef struct 
    {
        char nome[50];
        int idade;
        float altura;
    } Pessoa;

    Pessoa pl;

    printf("Digite o nome: ");
    scanf("%s", pl.nome);
    printf("Digite sua idade: ");
    scanf("%d", &pl.idade);
    printf("Digite sua altura: ");
    scanf("%f", &pl.altura);
    
    printf("Nome: %s, idade: %d, altura: %.2f", pl.nome, pl.idade, pl.altura);
}