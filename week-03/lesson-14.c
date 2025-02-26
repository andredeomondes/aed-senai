// Dessa vez o mesmo exercicio usando ponteiro e funções
// Criar um algoritmo que faça a entrada de dados e
// impressão de dados de uma pessoa. Uma pessoa
// tem nome, salario e data de nascimento.
i#nclude <stdio.h>
typedef struct {
	int dia, mes, ano;
}tp_data;

typedef struct {
	char nome[30];
	float salario;
	tp_data data;
} tp_pessoa;

tp_pessoa entradaDados(tp_pessoa p){
    printf("Digite o nome: ");
	scanf("%s", p.nome);
	printf("Digite o salario: ");
	scanf("%f", &p.salario);	
	printf("Digite a data (dia,mes,ano): ");
	scanf("%d", &p.data.dia);	
	scanf("%d", &p.data.mes);	
	scanf("%d", &p.data.ano);
	return p;	
}

void entradaDadosP(tp_pessoa *p){
    printf("Digite o nome: ");
	scanf("%s", p->nome);
	printf("Digite o salario: ");
	scanf("%f", &p->salario);	
	printf("Digite a data (dia,mes,ano): ");
	scanf("%d", &p->data.dia);	
	scanf("%d", &p->data.mes);	
	scanf("%d", &p->data.ano);
}
void saidaDados(tp_pessoa p){
 	printf("Dados da pessoa:\n");
	printf("Nome: %s\n", p.nome);
	printf("Salario: %.2f\n", p.salario);
	printf("Data: %d/%d/%d\n", p.data.dia, p.data.mes, p.data.ano);	
 }
int main(){
	tp_pessoa p;		
//	p = entradaDados(p);
    entradaDadosP(&p);	
    saidaDados(p);			
	return 0;
}