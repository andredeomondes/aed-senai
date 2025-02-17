#include <stdio.h>
#include <string.h>

int main() {

  char texto[50];
  char letra;
  printf("-------------------------------------\n");
  printf("|                                   |\n");
  printf("|  Criptografia do Cebolinha!       |\n");
  printf("|                                   |\n");
  printf("-------------------------------------\n");

  printf("\nEscreva um texto: ");
  scanf("%[^\n]s", texto);
  printf("\n - texto confirmado: %s\n", texto);

  int length;
  length = strlen(texto);

  // Troca de R por L || Troca de r por l
  for (int i = 0; i < length; i++) {
    if (texto[i] == 'R') {
      texto[i] = 'L';
    } else if (texto[i] == 'r') {
      texto[i] = 'l';
    }
  }

  
  // Troca do primeiro charactere pelo ultimo charactere 
  int charInicial = texto[0];
  int charFinal = texto[length-1];

  texto[0] = charFinal;
  texto[length-1] = charInicial;
  

  printf("\n\n-------------------------------------\n");
  printf("|                                   |\n");
  printf("|  Texto criptogrado com sucesso!   |\n");
  printf("|                                   |\n");
  printf("-------------------------------------\n");
  printf("\n - %s ", texto);

  return 0;
}
