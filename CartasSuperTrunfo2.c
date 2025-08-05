#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Carta 1
    char estado[20] = "Ceara";
    char codigo[5] = "A01";
    char cidade[30] = "Fortaleza";
    int populacao = 12325000;
    float area = 1521.11;
    float pib = 699.28;
    int turistico = 50;
    float densidade = populacao / area;
    float percapita = pib / populacao;
 
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o seu estado: \n");
    scanf("%s", estado);

    printf("Digite o código: \n");
    scanf("%s", codigo);

    printf("Digite sua cidade: \n");
    scanf("%s", cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km²: \n");
    scanf("%f", &area);

    printf("Qual o PIB em bilhões R$: \n");
    scanf("%f", &pib);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &turistico);

    densidade = populacao / area;
    
    percapita = (pib / populacao) * 1000000000;


    printf("\n=== Dados da Carta 1 ===\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", turistico);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", percapita);

    // Carta 2
    char estado1[20] = "Para";
    char codigo1[5] = "B02";
    char cidade1[30] = "Belem";
    int populacao1 = 6748000;
    float area1 = 1200.25;
    float pib1 = 300.50;
    int turistico1 = 30;
    float densidade1 = populacao1 / area1;
    float percapita1 = pib1 / populacao1;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o seu estado: \n");
    scanf("%s", estado1);

    printf("Digite o código: \n");
    scanf("%s", codigo1);

    printf("Digite sua cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: \n");
    scanf("%f", &area1);

    printf("Qual o PIB em bilhões R$: \n");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &turistico1);

    densidade1 = populacao1 / area1;
    
    percapita1 = (pib1 / populacao1) * 1000000000;
  
    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", percapita1);

    return 0;
}