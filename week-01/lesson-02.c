
#include <stdio.h>
int main() {
  char texto_1[20], texto_2[20];

  printf("Digite o nome: ");
  scanf("%[^\n]s", texto_1);
  // gets(texto_1);
  printf(" - %s  \n", texto_1);

  printf("\nDigite a sua graduação: ");
  scanf(" %[^\n]s", texto_2);
  printf(" - Graduação:  %s  \n", texto_2);

  return 0;
}