#include <stdio.h>

int main (){
    
    float nota1, nota2, nota3, media = 0.0;

    printf("Calculadora de Media de Notas\n");
    printf("\nDigite a primeira nota:");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:");
    scanf("%f", &nota2);
    printf("Digite a terceira nota:");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A media das notas é: %.2f\n", media);

return 0;

    }