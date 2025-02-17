#include <stdio.h>
#include <string.h>

int main() {

  char frase_1[30];
  char frase_2[30];

  printf("Digite a primeira frase: ");
   scanf(" %[^\n]s", frase_1);

  printf("\nDigite a segunda frase: ");
   scanf(" %[^\n]s\n", frase_2);


 int i;
 i = strcmp(frase_1,frase_2);
  if (i==0) {
    printf("São frases iguais.");
  } else {
    printf("São frases distintas");
  }

  return 0;
}