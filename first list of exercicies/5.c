#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float salario, vendas, salarioF;
	printf("Insira seu salario: ");
	scanf("%f", &salario);
	
	printf("Insira seu numero de vendas: ");
	scanf("%f", &vendas);
	
	salarioF = salario + (vendas * 0.04);
	
	printf("Seu salario final e: %.2f", salarioF);
	
	return 0;
}
