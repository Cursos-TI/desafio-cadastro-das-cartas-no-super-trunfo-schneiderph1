#include <stdio.h>

int main() {
    unsigned long int populacao, populacao2;
    int ponto_turistico, ponto_turistico2;
    float area, pib, area2, pib2;
    char estado, estado2;
    char cod_carta[3], cod_carta2[3];
    char nome_cidade[50], nome_cidade2[50];
    float densidade, densidade2, pib_per_capita, pib_per_capita2;
    float superPoderA, superPoderB;

    printf("Olá, iremos criar um Super Trunfo, abaixo virá como preencher: \n");
    printf("Agora iremos preeencher a Carta 1: \n");
    printf("Digite uma letra de A até H para o Estado: \n");
    scanf(" %c", &estado);

    printf("Digite codigo da carta de 01 até 04: \n");
    scanf("%s", cod_carta);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_cidade);

    printf("Digite a população: \n");
    scanf("%lu", &populacao);

    printf("Digite a área em KM²: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &ponto_turistico);

    printf("Agora iremos preeencher a Carta 2: \n");
    printf("Digite uma letra de A até H para o Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite codigo da carta de 01 até 04: \n");
    scanf("%s", cod_carta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_cidade2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área em KM²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &ponto_turistico2);

    densidade = (float)populacao / area;
    densidade2 = (float)populacao2 / area2;

    pib_per_capita = (pib * 1000000000.0) / (float)populacao;
    pib_per_capita2 = (pib2 * 1000000000.0) / (float)populacao2;

    superPoderA = (float)populacao + area + pib + ponto_turistico + pib_per_capita + (1 / densidade);
    superPoderB = (float)populacao2 + area2 + pib2 + ponto_turistico2 + pib_per_capita2 + (1 / densidade2);

    printf("\nCarta 1:\n");
    printf("Estado: %c \n", estado);
    printf("Código: %c%s \n", estado, cod_carta);
    printf("Nome da Cidade: %s \n", nome_cidade);
    printf("População: %lu \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", ponto_turistico);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita);
    printf("Super Poder: %.2f\n", superPoderA);

    printf("\nCarta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %c%s \n", estado2, cod_carta2);
    printf("Nome da Cidade: %s \n", nome_cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", ponto_turistico2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita2);
    printf("Super Poder: %.2f\n", superPoderB);

    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", populacao > populacao2 ? 1 : 2, populacao > populacao2);
    printf("Área: Carta %d venceu (%d)\n", area > area2 ? 1 : 2, area > area2);
    printf("PIB: Carta %d venceu (%d)\n", pib > pib2 ? 1 : 2, pib > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", ponto_turistico > ponto_turistico2 ? 1 : 2, ponto_turistico > ponto_turistico2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade < densidade2 ? 1 : 2, densidade < densidade2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pib_per_capita > pib_per_capita2 ? 1 : 2, pib_per_capita > pib_per_capita2);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoderA > superPoderB ? 1 : 2, superPoderA > superPoderB);

    return 0;
}
