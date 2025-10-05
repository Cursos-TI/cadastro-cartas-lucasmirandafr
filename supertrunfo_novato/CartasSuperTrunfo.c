#include <stdio.h>

// Tema 1 - Cadastro das cartas
// Objetivo: Criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char codigo1[4], codigo2[4];   // ex: A01 (+ '\0')
  char cidade1[50], cidade2[50]; // até 49 caracteres
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontos1, pontos2;

  // Carta 1
  printf("# DADOS DA CARTA 1\n");

  printf("Insira o Estado (letra de A a H): ");
  scanf(" %c", &estado1);

  printf("Insira o Código da Carta (01 a 04): ");
  scanf("%3s", codigo1);

  printf("Insira o Nome da Cidade: ");
  scanf("%49s", cidade1);

  printf("Insira a População: ");
  scanf("%d", &populacao1);

  printf("Insira a Área (km²): ");
  scanf("%f", &area1);

  printf("Insira o PIB (em bilhões): ");
  scanf("%f", &pib1);

  printf("Insira o Número de Pontos Turísticos: ");
  scanf("%d", &pontos1);

  // Carta 2
  printf("\n# DADOS DA CARTA 1\n");

  printf("Insira o Estado (letra de A a H): ");
  scanf(" %c", &estado2);

  printf("Insira o Código (01 a 04): ");
  scanf("%3s", codigo2);

  printf("Insira o Nome da Cidade: ");
  scanf("%49s", cidade2);

  printf("Insira a População: ");
  scanf("%d", &populacao2);

  printf("Insira a Área (km²): ");
  scanf("%f", &area2);

  printf("Insira o PIB (em bilhões): ");
  scanf("%f", &pib2);

  printf("Insira o Número de Pontos Turísticos: ");
  scanf("%d", &pontos2);

  // Exibição dos dados
  printf("\n== Carta 1 ==\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontos1);

  printf("\n== Carta 2 ==\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos2);

  return 0;
}