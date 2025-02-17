
#include <stdio.h>

int main() {

  // Variáveis
  int quantidade;
  int maior, menor;

  printf("Quantos valores você quer inserir? ");
  scanf("%d", &quantidade);


  int vetor[quantidade];
  
  // Laço "for" inserir dados no vetor
  for(int i = 0; i < quantidade; i++) {
    printf("Digite um número: ");
    scanf("%d", &vetor[i]);



    if(i==0) {
      maior = menor = vetor[i];
      
    } else {
      
      if (vetor[i] > maior) 
        maior = vetor[i];

      if(vetor[i] < menor) 
       menor = vetor[i]; 
      
    }  
    
    
  }
  
  printf("Maior =  %d | Menor %d", maior, menor);
  
  return 0;
}