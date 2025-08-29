int menu(){
    int opcao;
    while (1){
        printf("1) Calcular área do circulo\n");
        printf("2) Calcular área triangulo\n");
        printf("3) Calcular área retangulo\n");
        printf("Digite sua opção\n");
        scanf("%d", &opcao);

    }
    
    
}

int circulo(){
    int r;
    printf("Digite o raio: ");
    scanf("%f\n", &r);
    return 3,14 * r * r;
}