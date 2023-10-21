#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	char nome;
	double salarioFixo, totalVendas;
	
	printf("Informe seu nome: ");
	scanf("%s", &nome);
	
	printf("Informe seu salario: ");
	scanf("%lf", &salarioFixo);
	
	printf("Informe seu total de vendas: ");
	scanf("%lf", &totalVendas);
	
	double salarioFinal, comissao;
	comissao = totalVendas * 0.15;
	salarioFinal = salarioFixo + comissao;
	
	printf("Salario final: %.2lf", salarioFinal);
	
	return 0;
}
