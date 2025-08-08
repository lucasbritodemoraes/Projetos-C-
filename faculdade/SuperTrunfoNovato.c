#include <stdio.h>

int main (){

    char estado1[50] = "", codigocarta1[50] = "", cidade1[50] = "";
    int populacao1;
    float area1, pib1;
    int turismo1;

    char estado2[50] = "", codigocarta2[50] = "", cidade2[50] = "";
    int populacao2;
    float area2, pib2;
    int turismo2;
    
    printf("Bem-vindo ao Super Trunfo Países!\n");
    printf("Inicie cadastrando a primeira carta!\n");
    printf("Insira o estado:");
    scanf("%s", estado1);
    printf("Insira o código da carta:");
    scanf("%s", codigocarta1);
    printf("Insira a cidade:");
    scanf("%s", cidade1);
    printf("Insira a contagem populacional:");
    scanf("%d",&populacao1);
    printf("Insira a área (em km²):");
    scanf("%f",&area1);
    printf("Insira o pib:");
    scanf("%f",&pib1);
    printf("Insira o número de pontos turísticos:");
    scanf("%d",&turismo1);

    printf("\nAgora cadastre a segunda carta!\n");
    printf("Insira o estado:");
    scanf("%s", estado2);
    printf("Insira o código da carta:");
    scanf("%s", codigocarta2);
    printf("Insira a cidade:");
    scanf("%s", cidade2);
    printf("Insira a contagem populacional:");
    scanf("%d",&populacao2);
    printf("Insira a área (em km²):");
    scanf("%f",&area2);
    printf("Insira o pib:");
    scanf("%f",&pib2);
    printf("Insira o número de pontos turísticos:");
    scanf("%d",&turismo2);

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos turísticos: %d\n", turismo1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turísticos: %d\n", turismo2);

    return 1;
}