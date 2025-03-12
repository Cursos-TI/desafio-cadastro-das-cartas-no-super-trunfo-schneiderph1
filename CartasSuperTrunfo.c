#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

   #include <stdio.h>

int main (){
    int populacao, ponto_turistico, populacao2, ponto_turistico2;
    float area, pib, area2, pib2;
    char estado, estado2;
    char cod_carta [3], cod_carta2 [3];
    char nome_cidade [50], nome_cidade2 [50];
    float densidade, densidade2, pib_per_capita, pib_per_capita2;
    


    printf("Olá, iremos criar um Super Trunfo, abaixo virá como preencher: \n");
    printf("Agora iremos preeencher a Carta 1: \n");
    printf("Digite uma letra de A até H para o Estado: \n");
    scanf(" %c", &estado);

    printf("Digite codigo da carta de 01 até 04: \n");
    scanf("%s", cod_carta);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

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
    scanf("%d", &populacao2);

    printf("Digite a área em KM²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &ponto_turistico2);

    densidade = (float)populacao / area;

    densidade2 = (float)populacao2 / area2; 

    pib_per_capita = (pib * 1000000000.0) / (float) populacao; // Multiplica PIB por 1 bilhão

    pib_per_capita2 = (pib2 * 1000000000.0) / (float) populacao2; // Multiplica PIB por 1 bilhão


    printf("Carta 1:\n");
    printf("Estado: %c \n", estado);
    printf("Código: %c%s \n", estado, cod_carta);
    printf("Nome da Cidade: %s \n", nome_cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", ponto_turistico);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita);

    
    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %c%s \n", estado2, cod_carta2);
    printf("Nome da Cidade: %s \n", nome_cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", ponto_turistico2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita2);

    
    return 0;


}
}
