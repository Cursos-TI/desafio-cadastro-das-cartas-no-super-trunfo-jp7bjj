#include <stdio.h>

// Definição da estrutura para representar uma carta
struct Carta {
    char codigo[4]; // Código da cidade (ex: A01, B02)
    char estado[3]; // Estado da cidade (ex: SP, RJ)
    char nome[50]; // Nome da cidade
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
};

int main() {
    struct Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("Digite o estado da primeira cidade (ex: SP): ");
    scanf("%s", carta1.estado);
    printf("Digite o nome da primeira cidade: ");
    scanf("%s", carta1.nome);
    printf("Digite o código da primeira cidade (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a área: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cálculo dos novos atributos
    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao;

    // Cadastro da segunda carta
    printf("\nDigite o estado da segunda cidade (ex: RJ): ");
    scanf("%s", carta2.estado);
    printf("Digite o nome da segunda cidade: ");
    scanf("%s", carta2.nome);
    printf("Digite o código da segunda cidade (ex: B02): ");
    scanf("%s", carta2.codigo);
    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a área: ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Cálculo dos novos atributos
    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;

    // Exibição dos dados cadastrados
    printf("\n--- Dados das Cartas ---\n");
    printf("\nCidade: %s (%s)\nCódigo: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f bilhões/hab\n", 
           carta1.nome, carta1.estado, carta1.codigo, carta1.populacao, carta1.area, carta1.pib, carta1.pontos_turisticos, carta1.densidade_populacional, carta1.pib_per_capita);
    printf("\nCidade: %s (%s)\nCódigo: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f bilhões/hab\n", 
           carta2.nome, carta2.estado, carta2.codigo, carta2.populacao, carta2.area, carta2.pib, carta2.pontos_turisticos, carta2.densidade_populacional, carta2.pib_per_capita);

    // Escolha do atributo para comparação
    char atributo_escolhido[] = "População"; // Altere aqui para comparar outro atributo
    int valor1 = carta1.populacao;
    int valor2 = carta2.populacao;
    
    // Comparação e exibição do resultado
    printf("\n--- Comparação de Cartas ---\n");
    printf("\nComparação de cartas (Atributo: %s):\n", atributo_escolhido);
    printf("Carta 1 - %s (%s): %d\n", carta1.nome, carta1.estado, valor1);
    printf("Carta 2 - %s (%s): %d\n", carta2.nome, carta2.estado, valor2);
    
    if (valor1 > valor2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nome);
    } else if (valor2 > valor1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.nome);
    } else {
        printf("\nResultado: Empate!\n");
    }
    
    return 0;
}



