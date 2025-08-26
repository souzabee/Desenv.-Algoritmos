#include<stdio.h>
#include"funcoes.h"
void media(){
    int num1, num2, num3;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    int media = (num1 + num2 + num3) / 3;

    if (media >= 7){
        printf("Aluno aprovado, sua média é:  %d\n", media);
    }
    else if (media >= 5 && media < 7){
        printf("Aluno de recuperação, sua média é:  %d\n", media);
    }
    else {
        printf("Aluno reprovado, sua média é:  %d\n", media);
    }


}