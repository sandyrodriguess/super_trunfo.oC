#include <stdio.h>

int main() {
    // Carta 1 - Pará
    char estado1[14] = "Pará";
    char codigo1[11] = "A01";
    char nomeCidade1[21] = "Marabá";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;

    // Carta 2 - Rio de Janeiro
    char estado2[19] = "Rio De Janeiro";
    char codigo2[10] = "B02";
    char nomeCidade2[20] = "Maricá";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;

    // Exibição da Carta 1
    printf("=== Carta 1 ===\n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição da Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
