#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int paes, broas;
	float custoPaes, custoBroas, poupanca;
	printf("Insira a quantidade de paes vendidos: ");
	scanf("%d", &paes);
	
	printf("Insira a quantidade de broas vendidas: ");
	scanf("%d", &broas);
	
	custoPaes = paes * 0.12;
	custoBroas = broas * 1.50;
	
	poupanca = (custoPaes + custoBroas) * 0.10;
	printf("Seu valor a depositar na poupanca eh: %f", poupanca);
	
	return 0;
}
