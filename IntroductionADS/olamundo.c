#include <stdio.h>

int main () {
  int idade;
  float altura;
  char nome[20];

  printf("Digite seu nome: ");
  scanf("%s", nome);

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  printf("Digite sua altura: ");
  scanf("%f", &altura);

  printf("O nome é: %s\n", nome);
  printf("A idade é: %d\n", idade);
  printf("A altura é: %f\n", altura);
}