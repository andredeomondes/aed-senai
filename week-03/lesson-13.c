#include <stdio.h>

typedef struct
{
	int dia, mes, ano;
} tp_data;

typedef struct
{
	char nome[50];
	float salario;
	tp_data data;
} tp_pessoa;

void imprimir(tp_pessoa p)
{
	printf("\n---------- DADOS INFORMADOS ----------\n");
	printf("\nNome: %s", p.nome);
	printf("\nSalario: %.2f ", p.salario);
	if (p.data.mes < 10)
	{
		printf("\nData: %d/0%d/%d ", p.data.dia, p.data.mes, p.data.ano);
	}
	else
	{
		printf("\nData: %d/%d/%d ", p.data.dia, p.data.mes, p.data.ano);
	}
	printf("\n---------------------------------------\n\n");
}

int main()
{

	tp_pessoa p;
	printf("\n-------------------------------------------------");
	printf("\n     Bem-vindo ao nosso cadastro de pessoas!\n");
	printf("-------------------------------------------------\n");

	printf("\nDigite o nome: ");
	scanf(" %[^\n]s", &p.nome);

	printf("\nDigite o salario: ");
	scanf("%f", &p.salario);

	printf("\nDigite a data de nascimento (dia, mes, ano): ");
	scanf("%d %d %d", &p.data.dia, &p.data.mes, &p.data.ano);

	imprimir(p);

	return 0;
}  