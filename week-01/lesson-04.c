#include <stdio.h>
#include <string.h>

int main() {

  char texto[30];
  char letra;
  printf("-------------------------------------\n");
  printf("|                                   |\n");
  printf("|  Bem-vindo ao contador de letras! |\n");
  printf("|                                   |\n");
  printf("-------------------------------------\n");

  printf("\nEscreva um texto: ");
  scanf("%[^\n]s", texto);
  printf("\n - texto confirmado: %s\n", texto);


  printf("\n\nQual letra você deseja contar? ");
  scanf(" %c", &letra);
  printf("\n - letra confirmada: %c", letra);


  // strlen serve para pegar o tamanho certo do char
  int length = strlen(texto);
  int count;

  
  for (int i = 0; i<length; i++) {
    if(texto[i] == letra) {
      count++;
    }
    
  }

  printf("\n\n-------------------------------\n");
  printf("|                             |\n");
  printf("| Quantidade de letra (%c): %d ", letra, count);
  printf("\n|                              |\n");
  printf("-------------------------------\n");

  
  return 0;
}