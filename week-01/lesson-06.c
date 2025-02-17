#include <stdio.h>
float calcularArea(float base, float altura) {
	float area = base * altura;
	return area;

}

int main() {
	
	float base, atura, area;
	
	printf("Digite a base: ");
	scanf("%f", &base);
	
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	area = calcularArea(vase, altura);
	printf("O valor da area e: %.2f", area);
	return 0;
}