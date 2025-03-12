#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1[2], cidade1[50], codigo_carta1[50]; 
    int populacao1, pontos_turisticos1; 
    float area1, pib1; 

    // Variáveis para a segunda carta
    char estado2[2], cidade2[50], codigo_carta2[50]; 
    int populacao2, pontos_turisticos2; 
    float area2, pib2;

    // Leitura da primeira carta
    printf("Digite uma letra de A a H (representando um dos oito estados) para a Carta 1: ");
    scanf("%s", estado1); 

    printf("Digite o código da carta (a letra do estado seguida de um número de 01 a 04) para a Carta 1: ");
    scanf("%s", codigo_carta1);  

    printf("Digite o nome da cidade para a Carta 1: ");
    scanf(" %[^\n]%*c", cidade1); 

    printf("Digite o número de habitantes da cidade para a Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados para a Carta 1: ");
    scanf("%f", &area1);

    printf("Digite o produto interno bruto (PIB) da cidade para a Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade para a Carta 1: ");
    scanf("%d", &pontos_turisticos1);

    // Leitura da segunda carta
    printf("Digite uma letra de A a H (representando um dos oito estados) para a Carta 2: ");
    scanf("%s", estado2); 

    printf("Digite o código da carta (a letra do estado seguida de um número de 01 a 04) para a Carta 2: ");
    scanf("%s", codigo_carta2);  

    printf("Digite o nome da cidade para a Carta 2: ");
    scanf(" %[^\n]%*c", cidade2);

    printf("Digite o número de habitantes da cidade para a Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados para a Carta 2: ");
    scanf("%f", &area2);

    printf("Digite o produto interno bruto (PIB) da cidade para a Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade para a Carta 2: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição das informações das duas cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f reais \nNúmero de Pontos Turísticos: %d\n", 
        estado1, codigo_carta1, cidade1, populacao1, area1, pib1, pontos_turisticos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f reais \nNúmero de Pontos Turísticos: %d\n", 
        estado2, codigo_carta2, cidade2, populacao2, area2, pib2, pontos_turisticos2);

    return 0; 
}
