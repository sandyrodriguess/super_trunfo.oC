#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1[50];
    char codigo1[20];
    char nomeCidade1[50];
    int populacao1; 
    int pontosTuristicos1;
    float area1; 
    float pib1;

    // Variáveis da Carta 2
    char estado2[50]; 
    char codigo2[20];
    char nomeCidade2[50];
    int populacao2; 
    int pontosTuristicos2;
    float area2;
    float pib2;

    // Leitura da Carta 1
    printf("=== Carta 1 ===\n");
    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura da Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição das Cartas em formato de lista
    printf("\n=== Cartas Cadastradas ===\n");

    printf("\nCarta 1:\n");
    printf("1. Estado: %s\n", estado1);
    printf("2. Código: %s\n", codigo1);
    printf("3. Nome da Cidade: %s\n", nomeCidade1);
    printf("4. População: %d\n", populacao1);
    printf("5. Área: %.2f km²\n", area1);
    printf("6. PIB: %.2f bilhões\n", pib1);
    printf("7. Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("1. Estado: %s\n", estado2);
    printf("2. Código: %s\n", codigo2);
    printf("3. Nome da Cidade: %s\n", nomeCidade2);
    printf("4. População: %d\n", populacao2);
    printf("5. Área: %.2f km²\n", area2);
    printf("6. PIB: %.2f bilhões\n", pib2);
    printf("7. Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
