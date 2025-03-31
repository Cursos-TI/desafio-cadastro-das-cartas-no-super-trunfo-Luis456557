#include <stdio.h>

// Estrutura para armazenar os atributos de uma carta
typedef struct {
    char codigo[4]; // Código postal (ex: A01, B02)
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

int main() {
    // Declaração das duas cartas
    Carta carta1, carta2;

    // Entrada de dados para a primeira carta
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf("%3s", carta1.codigo);
    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a área (km²): ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Entrada de dados para a segunda carta
    printf("\nDigite o código da segunda carta (ex: B02): ");
    scanf("%3s", carta2.codigo);
    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a área (km²): ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibição dos dados cadastrados
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Código: %s\n", carta1.codigo);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);
    
    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Código: %s\n", carta2.codigo);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);
    
    return 0;
}
