#include <stdio.h>

int main() {
    // Carta 1
    char estado[20] = "Ceara";
    char codigo[5] = "A01";
    char cidade[30] = "Fortaleza";
    unsigned long int populacao = 12325000;
    float area = 1521.11;
    float pib = 699.28;
    int turistico = 50;
    float densidade, percapita, super_poder;

    // Carta 2
    char estado1[20] = "Para";
    char codigo1[5]= "B02";
    char cidade1[30] = "Belem";
    unsigned long int populacao1 = 6748000;
    float area1= 1200.25;
    float pib1 = 300.50;
    int turistico1 = 30;
    float densidade1, percapita1, super_poder1;

    // ==== Entrada dos dados da Carta 1 ====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o seu estado: ");
    scanf("%s", estado);

    printf("Digite o código: ");
    scanf("%s", codigo);

    printf("Digite sua cidade: ");
    scanf("%s", cidade);

    printf("Digite a população: ");
    scanf("%lu", &populacao);

    printf("Digite a área em km²: ");
    scanf("%f", &area);

    printf("Qual o PIB em bilhões R$: ");
    scanf("%f", &pib);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &turistico);

    densidade = populacao / area;
    percapita = (pib * 1000000000) / populacao;
    super_poder = (float)populacao + area + (pib * 1000000000) + turistico + percapita + (1 / densidade);

    // ==== Entrada dos dados da Carta 2 ====
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o seu estado: ");
    scanf("%s", estado1);

    printf("Digite o código: ");
    scanf("%s", codigo1);

    printf("Digite sua cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Qual o PIB em bilhões R$: ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &turistico1);

    densidade1 = populacao1 / area1;
    percapita1 = (pib1 * 1000000000) / populacao1;
    super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + turistico1 + percapita1 + (1 / densidade1);

    // ==== Impressão dos dados das cartas ====
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", turistico);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", percapita);
    printf("Super Poder: %.2f\n", super_poder);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", percapita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // ==== Comparações ====
    printf("\n=== Comparação de Cartas ===\n");

    printf("População: Carta 1 venceu (%d)\n", populacao > populacao1);
    printf("Área: Carta 1 venceu (%d)\n", area > area1);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib1);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", turistico > turistico1);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade < densidade1);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", percapita > percapita1);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder > super_poder1);

    return 0;
}