#include <stdio.h>

typedef struct {
    char marca[30], modelo[30], placa[8];
    int ano;
    float preco;
} tp_veiculo;

int main()
{
 
 tp_veiculo v;
 
 scanf("%d", &v.ano);
 
 printf("%d", v.ano);

    return 0;
}