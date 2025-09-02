#include<stdio.h>
#include"funcoes.h"

int menu(){
    int opcao;
    while (1){
        printf("1) Calcular área do circulo\n");
        printf("2) Calcular área triangulo\n");
        printf("3) Calcular área retangulo\n");
        printf("4) Sair\n");
        printf("\nDigite sua opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4){
            return opcao;
        }
        else if(opcao == 4){
            break;
        }

        printf("Valor inválido!\n");
    }

    
}

float circulo(){
    float r;
    printf("Digite o raio: ");
    scanf("%f", &r);
    return 3.14 * r * r;
}

float triangulo(){
    float b, h;
    printf("Digite a base: ");
    scanf(" %f", &b);
    printf("Digitge a altura: ");
    scanf(" %f", &h);
    return b * h / 2;
}

float retangulo(){
    float a, b;
    printf("Digite o lado 'A': ");
    scanf("%f", &a);
    printf("Digite o lado 'B': ");
    scanf("%f", &b);
    return a * b;
}

