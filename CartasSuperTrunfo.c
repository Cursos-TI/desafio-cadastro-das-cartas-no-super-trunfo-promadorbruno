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

                                            char estado[20] = "Ceara";
                                                char codigo[5] = "A01";
                                                    char cidade[30] = "Fortaleza";
                                                        int populacao = 12325000;
                                                            float area = 1521.11;
                                                                float PIB = 699.28;
                                                                    int turistico = 50;
                                                                        
                                                                            printf("=== Cadastro da Carta 1 ===\n");
                                                                                printf("Digite o seu estado: \n");
                                                                                    scanf("%s", estado);

                                                                                        printf("Digite o codígo: \n");
                                                                                            scanf("%s", codigo);

                                                                                                printf("Digite sua cidade: \n");
                                                                                                    scanf("%s", cidade);

                                                                                                        printf("Digiter a população: \n");
                                                                                                            scanf("%d", &populacao);

                                                                                                                printf("Digite a área em km²: \n");
                                                                                                                    scanf("%f", &area);

                                                                                                                        printf("Qual o PIB em bilhões R$: \n");
                                                                                                                            scanf("%f", &PIB);

                                                                                                                                printf("Quantidade de pontos turísco: \n");
                                                                                                                                    scanf("%d", &turistico);
                                                                                                                                        
                                                                                                                                            printf("\n=== Dados da Carta 1 ===\n");
                                                                                                                                                printf("Estado: %s\n", estado);
                                                                                                                                                    printf("Codígo: %s\n", codigo);
                                                                                                                                                        printf("Cidade: %s\n", cidade);
                                                                                                                                                            printf("População: %d\n", populacao);
                                                                                                                                                                printf("Área: %.2f Km²\n", area);
                                                                                                                                                                    printf("PIB: R$ %.2f bilhões\n", PIB);
                                                                                                                                                                        printf("Pontos Turístico: %d\n", turistico);

                                                                                                                                                                            char estado1[20] = "Para";
                                                                                                                                                                                char codigo1[5] = "B02";
                                                                                                                                                                                    char cidade1[30] = "Belem";
                                                                                                                                                                                        int populacao1 = 6748000;
                                                                                                                                                                                            float area1 = 1200.25;
                                                                                                                                                                                                float PIB1 = 300.50;
                                                                                                                                                                                                    int turistico1 = 30;
                                                                                                                                                                                                        
                                                                                                                                                                                                            printf("=== Cadastro da Carta 2 ===\n");
                                                                                                                                                                                                                printf("Digite o seu estado: \n");
                                                                                                                                                                                                                    scanf("%s", estado1);

                                                                                                                                                                                                                        printf("Digite o codígo: \n");
                                                                                                                                                                                                                            scanf("%s", codigo1);

                                                                                                                                                                                                                                printf("Digite sua cidade: \n");
                                                                                                                                                                                                                                    scanf("%s", cidade1);

                                                                                                                                                                                                                                        printf("Digiter a população: \n");
                                                                                                                                                                                                                                            scanf("%d", &populacao1);

                                                                                                                                                                                                                                                printf("Digite a área: \n");
                                                                                                                                                                                                                                                    scanf("%f", &area1);

                                                                                                                                                                                                                                                        printf("Qual o PIB em bilhões R$: \n");
                                                                                                                                                                                                                                                            scanf("%f", &PIB1);

                                                                                                                                                                                                                                                                printf("Quantidade de pontos turísco: \n");
                                                                                                                                                                                                                                                                    scanf("%d", &turistico1);

                                                                                                                                                                                                                                                                       printf("\n=== Dados da Carta 2 ===\n");
                                                                                                                                                                                                                                                                           printf("Estado: %s\n", estado1);
                                                                                                                                                                                                                                                                               printf("Codígo: %s\n", codigo1);
                                                                                                                                                                                                                                                                                   printf("Cidade: %s\n", cidade1);
                                                                                                                                                                                                                                                                                       printf("População: %d\n", populacao1);
                                                                                                                                                                                                                                                                                           printf("Área: %.2f Km²\n", area1);
                                                                                                                                                                                                                                                                                               printf("PIB: R$ %.2f bilhões\n", PIB1);
                                                                                                                                                                                                                                                                                                   printf("Pontos Turístico: %d\n", turistico1);

                                                                                                                                                                                                                                                                                                       return 0;
}
