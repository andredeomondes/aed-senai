#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*

- Crie um algoritmo que receba 5 valores inteiros
- Em uma função indenpendente, eleve os valores ao quadrado
- Para finalizar, imprima em tela os novos valores

*/



    // Função que eleva os números ao quadrado
float elevarAoQuadrado (float numero) {
    return numero*numero;
    
}



int main() {
    printf("\n------------------------------------------------\n");
    printf("\nBem-vindo ao elevador de números ao quadrado!\n");
    printf("\n------------------------------------------------\n");
    

    int tamanhoDoVetor = 5;
    float numeros[tamanhoDoVetor], numerosElevados[tamanhoDoVetor];
    
    
    // Leitura dos Numeros
    for (int i = 0; i < tamanhoDoVetor; i++) {
        printf("\nDigite o número (%d): ", i+1);
        scanf("%f", &numeros[i]);
    
    // Salvando numeros elevados    
        numerosElevados[i] = elevarAoQuadrado(numeros[i]);
        
    }
    
    printf("\n------------------------------------------------\n");
    printf("Valores confirmados: ");
    
    
    for (int i = 0; i < tamanhoDoVetor; i++) {
        printf("\n%.1f        | ",numeros[i]);
        

        printf(" %.1f   \n", numerosElevados[i]);
    }
    
    printf("\n------------------------------------------------\n");
    
    return 0;
    


}
