#include <stdio.h>

int main (){

    // Variáveis para armazenar os dados da carta 1
    char estado1[50] = "", codigocarta1[50] = "", cidade1[50] = "";
    int populacao1;
    float area1, pib1, densidade1, percapta1;
    int turismo1;

    // Variáveis para armazenar os dados da carta 2
    char estado2[50] = "", codigocarta2[50] = "", cidade2[50] = "";
    int populacao2;
    float area2, pib2, densidade2, percapta2;
    int turismo2;
    
    // Imputando os dados da carta 1
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

    // Imputando os dados da carta 2
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


    // Calculando a densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;   
    percapta1 = pib1 / populacao1;
    densidade2 = populacao2 / area2;
    percapta2 = pib2 / populacao2;

    // Exibindo os dados da carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", turismo1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", percapta1);

    // Exibindo os dados da carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", turismo2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", percapta2);

    return 0;
}