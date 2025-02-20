#include <stdio.h>

void calcularArea(float b, float a, float *parea);  // Declaração da função

int main() {
	
	float base, altura, area;
	
	printf("Digite a base: ");
	scanf("%f", &base);
	
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	calcularArea(base, altura, &area);  // Chamada da função
	printf("O valor da area e: %.2f", area);
	return 0;
}

void calcularArea(float b, float a, float *parea) {
	*parea = b * a;  // Usar b e a, que são os parâmetros da função
}
