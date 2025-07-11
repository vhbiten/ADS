#include <stdio.h>
int main() {
  //variáveis
  char card1_estado[20], card2_estado[20];
  char card1_codigo[20], card2_codigo[20];
  char card1_cidade[20], card2_cidade[20];
  int card1_populacao, card2_populacao;
  float card1_area, card2_area;
  float card1_pib, card2_pib;
  int card1_pontosturisticos, card2_pontosturisticos;
  //cadastro das cartas
  //primeira carta
  printf("Cadastre sua primeira carta.\n Digite o Estado: ");
  scanf("%s", card1_estado);

  printf("Digite a primeira letra do Estado + um número para ser o código da sua carta (exemplo: A01, B02, C03)\n R: ");
  scanf("%s", card1_codigo);

  printf("Qual o nome da cidade?\n R:");
  scanf("%s", card1_cidade);
  
  printf("Quantos habitantes tem a sua cidade?\n R:");
  scanf("%d", &card1_populacao);

  printf("Quantos quilômetros quadrados (km²) tem a sua cidade?\n R:");
  scanf("%f", &card1_area);
  
  printf("Qual o PIB da sua cidade?\n R:");
  scanf("%f", &card1_pib);

  printf("Quantos pontos turísticos a sua cidade tem?\n R:");
  scanf("%d", &card1_pontosturisticos);

  //segunda carta
  printf("Cadastre sua segunda carta.\n Digite o Estado: ");
  scanf("%s", card2_estado);

  printf("Digite a primeira letra do Estado + um número para ser o código da sua carta (exemplo: A01, B02, C03)\n R: ");
  scanf("%s", card2_codigo);

  printf("Qual o nome da cidade?\n R:");
  scanf("%s", card2_cidade);
  
  printf("Quantos habitantes tem a sua cidade?\n R:");
  scanf("%d", &card2_populacao);

  printf("Quantos quilômetros quadrados (km²) tem a sua cidade?\n R:");
  scanf("%f", &card2_area);
  
  printf("Qual o PIB da sua cidade?\n R:");
  scanf("%f", &card2_pib);

  printf("Quantos pontos turísticos a sua cidade tem?\n R:");
  scanf("%d", &card2_pontosturisticos);

  printf("CARTA 1:\n");
  printf("Estado: %s\n", card1_estado);
  printf("Código: %s\n", card1_codigo);
  printf("Nome da Cidade: %s\n", card1_cidade);
  printf("População: %d habitantes\n", card1_populacao);
  printf("Área: %f km²\n", card1_area);
  printf("PIB: %f bilhões de reais\n", card1_pib);
  printf("Números de Pontos Turísticos: %d\n", card1_pontosturisticos);
  
  printf("CARTA 2:\n");
  printf("Estado: %s\n", card2_estado);
  printf("Código: %s\n", card2_codigo);
  printf("Nome da Cidade: %s\n", card2_cidade);
  printf("População: %d habitantes\n", card2_populacao);
  printf("Área: %f km²\n", card2_area);
  printf("PIB: %f bilhões de reais\n", card2_pib);
  printf("Números de Pontos Turísticos: %d\n", card2_pontosturisticos);

  return 0;


}
  
