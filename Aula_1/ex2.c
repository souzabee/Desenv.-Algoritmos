#include<stdio.h>

int main(){
    
    int h, m, s, tempo_passado, tempo_a_passar;
    
    printf("Que horas são? ");
    scanf("%d", &h);

    printf("Que minutos são? ");
    scanf("%d", &m);

    printf("Que segundos são? ");
    scanf("%d", &s);

    tempo_passado = (h * 3600) + (m * 60) + s;

    tempo_a_passar = 86400 - tempo_passado;

    printf("Tempo passado em segundos: %.1d\n", tempo_passado);
    printf("Tempo a passar em segundos: %.1d\n", tempo_a_passar);

    return 0;
}