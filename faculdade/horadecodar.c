#include <stdio.h>

int main (){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite seu nome:\n");
    scanf("%s", &nome);


    printf("Digite sua idade:\n");
    scanf("%d", &idade);


    printf("Digite sua altura:\n");
    scanf("%f", &altura);
    

    printf("Digite sua matricula:\n");
    scanf("%d", &matricula);

    printf("\nO nome é: %s\n", nome);
    printf("A idade é: %d\n", idade);
    printf("A altura é: %d\n", altura);
    printf("A matricula é: %d\n", matricula);

    return 0;
}