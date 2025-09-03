#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
  char estado1[50];
    char codigo1[3];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Entrada de dados
    printf("Digite o estado da Carta 1 (A-H):\n ");
    scanf(" %s", &estado1);

    printf("Digite o código da Carta 1 (ex: A01):\n ");
    scanf("%3s", codigo1);  

    printf("Digite o nome da cidade da Carta 1:\n");
    scanf("%s", nomeCidade1);

    printf("Digite a população da Carta 1:\n");
    scanf("%d", &populacao1);

    printf("Digite a área da Carta 1 (em km²):");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1:");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da Carta 1:\n");
    scanf("%d", &pontosTuristicos1);

    // Exibição dos dados
    printf("estado: %s, \n", estado1);
    printf("Codigo:%s, \n", codigo1);
    printf("População:%d, \n", populacao1);
     while (getchar() != '\n');
    printf("area: %f km², \n", area1);
    while (getchar() != '\n');
    printf("PIB:  %.2f, \n", pib1);
    while (getchar() != '\n');
    printf("Pontos Turisticos:  %d, \n", pontosTuristicos1);
     while (getchar() != '\n');

    return 0;
}   
    
   
