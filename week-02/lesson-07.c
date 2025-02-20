#include <stdio.h>

float calcularDelta (float a, float b, float c) {

	return (b*b)-(4*a*c);

}

float calcularRaiz1 (float a, float b, float delta) {

	return (- b + delta)/(2*a);

}

float calcularRaiz2 (float a, float b, float delta) {

	return (- b - delta)/(2*a);

}


int main() {

	float a, b,c, delta, raiz1, raiz2;

	printf("-------------------------------------------------------\n");
	printf(" Bem-vindo a calculadora de equacao do segundo grau!\n");
	printf("-------------------------------------------------------\n\n");


	printf("Digite o valor de (a): ");
	scanf("%f", &a);

	printf("Digite o valor de (b): ");
	scanf("%f", &b);

	printf("Digite o valor de (c): ");
	scanf("%f", &c);

	delta = calcularDelta(a,b,c);

	printf("Valor de Delta: %.2f",delta);

	if (delta > 0) {
		printf("\n--------------------------------------------\n");
		printf("\n>>>> Delta > 0 (duas raizes reais e distintas) <<<<\n\n");
		raiz1 = calcularRaiz1(a,b,delta);
		raiz2 = calcularRaiz2(a,b,delta);
		printf("Raiz 01: %.2f\n", raiz1);
		printf("Raiz 02: %.2f\n", raiz2);
		printf("\n--------------------------------------------\n");
	} else if (delta == 0) {
		printf("\n--------------------------------------------\n");
		printf("\n>>>> Delta = 0 (Duas raizes reais e iguais) <<<<\n\n");
		raiz1 = calcularRaiz1(a,b,delta);
		raiz2 = calcularRaiz2(a,b,delta);
		printf("Raiz 01: %.2f\n", raiz1);
		printf("Raiz 02: %.2f\n", raiz2);
		printf("\n--------------------------------------------\n");
	} else {
		printf("\n--------------------------------------------\n");
		printf("\n>>>> Delta < 0 (nenhuma raiz real, raizes complexas) <<<<\n\n");
		printf("\n--------------------------------------------\n");
	}


	return 0;
}
