#include <stdio.h>

int main() {

    int *px, *py; // Declaração dos ponteiros
    int x = 5, y = 7;
    int **ppy; // Ponteiro de ponteiro

    printf("x: %d, y: %d \n", x, y); // %d para mostrar o valor de x e y
    printf("Endereco de x: %x, endereco de y: %x \n", &x, &y); // %x para mostrar o endereco de x e y em hexadecimal

    px = &x; // Atribuindo endereco de memoria para o ponteiro px
    py = &y; // Atribuindo endereco de memoria para o ponteiro py

    printf("px: %x, py: %x\n", px, py);  // Printando os enderecos de memoria em hexadecimal
    printf("x: %d e y: %d\n ", *px, *py); // Printando os valores de x e y

    *px = *py; // Atribuindo o valor de y a x
    printf("x: %d e y: %d\n ", x, y); // Printando os novos valores de x e y
    
    py = px; // Agora py aponta para o mesmo endereço que px
    printf("px: %x e py: %x\n", px, py);  // Verificando que px e py são iguais agora

    ppy = &px; // Atribuindo o endereço de px a ppy (ponteiro de ponteiro)
    **ppy = 10; // Alterando o valor de x através de ppy
    printf("x: %d e y: %d\n ", x, y); // Agora x foi alterado para 10, y permanece 7
    
    printf("ppy: %x\n", *ppy); // Printando o endereço armazenado por ppy (que é o endereço de px)

    return 0;
}
