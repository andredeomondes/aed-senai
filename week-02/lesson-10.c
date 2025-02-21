#include <stdio.h>
#include <math.h>

// Função que calcula o quadrado de cada número no vetor
void quadradoPonteiro(int quantidade, int *numeros, int *quadrados) {
    for (int i = 0; i < quantidade; i++) {
        *(quadrados + i) = pow(*(numeros + i), 2); // Calcula o quadrado do número
    }
}

// Função que imprime o número original e o número ao quadrado
void impressaoPonteiro(int quantidade, int numeros[], int quadrados[]) {
    for (int i = 0; i < quantidade; i++) {
        printf("(%d) Numero: %d | Numero ao quadrado: %d \n", (i+1), numeros[i], quadrados[i]);
    }
}

int main() {
    int quantidade;

    // Solicita a quantidade de números a serem inseridos
    printf("----------------------------------------------------------------\n");
    printf("|                BEM VINDO A CALCULADORA QUADRATICA!           |\n"); 
    printf("----------------------------------------------------------------\n");

    printf("\nDigite a quantidade de numeros que voce quer inserir: ");
    scanf("%d", &quantidade);
    printf("\n----------------------------------------------------------------\n");

    // Definir os vetores com o tamanho correto
    int numeros[quantidade];
    int quadrados[quantidade];

    // Ler a quantidade inserida de números pelo usuário
    for (int i = 0; i < quantidade; i++) {
        printf("Digite um numero (%d): ", i+1);
        scanf("%d", &numeros[i]);
    printf("----------------------------------------------------------------\n");
    }

    // Calcular o quadrado dos números e armazenar no vetor 'quadrados'
    quadradoPonteiro(quantidade, numeros, quadrados);

    // Imprimir os números originais e os números ao quadrado
    impressaoPonteiro(quantidade, numeros, quadrados);

    printf("\n----------------------------------------------------------------\n");
    printf("    Encerrando programa...");
    
    return 0;
}
