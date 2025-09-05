#include <stdio.h>
// Estrutura que representa uma carta do jogo
struct Carta {
    char estado;
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

    int main() {
      printf("Desafio CartasSuperTrunfo!\n");
      // Declaração das duas cartas
    struct Carta carta1;
    struct Carta carta2;

    // Instruções para o usuário
    printf("\nCadastro da Carta 1:\n");

    printf("Digite o estado (letra):\n");
    scanf(" %c", &carta1.estado);

    printf("Digite o código:\n");
    scanf(" %s ", &carta1.codigo);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n] ", carta1.nomeCidade);

    printf("Digite a população:\n");
    scanf(" %s", &carta1.populacao);

    printf("Digite a área (em km²):\n");
    scanf(" %s ", &carta1.area);

    printf("Digite o PIB (em bilhões de reais):\n");
    scanf(" %f ", &carta1.pib);

    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &carta1.pontosTuristicos);

    printf("\nCadastro da Carta 2:\n");

    printf("Digite o estado (letra):\n");
    scanf(" %s", &carta2.estado);

    printf("Digite o código:\n");
    scanf(" %s ", carta2.codigo);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n] ", carta2.nomeCidade);

    printf("Digite a população:\n");
    scanf(" %s", &carta2.populacao);  // Corrigido aqui!

    printf("Digite a área (em km²):\n");
    scanf(" %s ", &carta2.area);

    printf("Digite o PIB (em bilhões de reais):\n");
    scanf(" %f ", &carta2.pib);

    rintf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &carta2.pontosTuristicos);


    // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}

  
  