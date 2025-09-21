#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Declarando as variáveis para a carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declarando as variáveis para a carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro das Cartas:
    // Carta 1
    printf("Cadastro da Carta 1: \n");
    printf("Digite o Estado: ");
    // printf imprime a mensagem pedindo a informação
    scanf("%c", &estado1);
    // scanf lê a entrada e armazena na variável

    printf("Digite o Código da Carta (ex.: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a População: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Carta 2
    printf("\nCadastro da Carta 2 \n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex.: A01): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a População: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    
    // Declarando as váriaveis para a densidade populacional e pib per capita para carta 1
    // Cálculos
    float densiPopulacional1 = (float)populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000.0) / (float)populacao1;
    /* Multiplicando o PIB por 1.000.000.000 pois o valor digitado pelo usuário
    está em bilhões de reais. Para calcular o PIB per capita corretamente
    converti o valor para reais antes de dividir pela população. */

    // Declarando as váriaveis para a densidade populacional e pib per capita para carta 2
    // Cálculos
    float densiPopulacional2 = (float)populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;

    // Cálculos do Super Poder das cartas
    float superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densiPopulacional1);
    float superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densiPopulacional2);

    // Exibição dos Dados das Cartas:
    // Exibindo os valores inseridos para cada carta, um por linha, utilizando o printf
    // Carta 1
    printf("\nCarta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reias\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densiPopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Supoer Poder: %.2f\n", superPoder1);

    // Carta 2
    printf("\nCarta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reias\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densiPopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Supoer Poder: %.2f\n", superPoder2);

    // Comparando os atributos das Cartas e exibindo as cartas vencedoras
    printf("\nComparação de Cartas \n"); 

    printf("População: Carta %d venceu (%d)\n",
    1 * (populacao1 > populacao2) + 2 * (populacao2 > populacao1),
       (populacao1 > populacao2));

    printf("Área: Carta %d venceu (%d)\n",
    1 * (area1 > area2) + 2 * (area2 > area1),
       (area1 > area2));

    printf("PIB: Carta %d venceu (%d)\n",
    1 * (pib1 > pib2) + 2 * (pib2 > pib1),
       (pib1 > pib2));

    printf("Pontos Turísticos: Carta %d venceu (%d)\n",
    1 * (pontosTuristicos1 > pontosTuristicos2) + 2 * (pontosTuristicos2 > pontosTuristicos1),
       (pontosTuristicos1 > pontosTuristicos2));

    printf("Densidade Populacional: Carta %d venceu (%d)\n",
    1 * (densiPopulacional1 < densiPopulacional2) + 2 * (densiPopulacional2 < densiPopulacional1),
       (densiPopulacional1 < densiPopulacional2));
       
    printf("PIB per Capita: Carta %d venceu (%d)\n",
    1 * (pibPerCapita1 > pibPerCapita2) + 2 * (pibPerCapita2 > pibPerCapita1),
       (pibPerCapita1 > pibPerCapita2));

    printf("Super Poder: Carta %d venceu (%d)\n",
    1 * (superPoder1 > superPoder2) + 2 * (superPoder2 > superPoder1),
       (superPoder1 > superPoder2));

    return 0;
}