#include "calculadora.h"

float soma(float a, float b){
    return a + b;

}

float sub(float a,float b){
    return a - b;
}


float multi(float a, float b){
    return a*b;
}

float divisao(float a, float b){
    return a/b;
}

int divisao_valida(float divisor){
    return divisor != 0;

}