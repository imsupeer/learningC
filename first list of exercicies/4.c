#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float custoEsp, precoConv, minimoConv;
	printf("Insira o custo do espeteculo: ");
	scanf("%f", &custoEsp);
	
	printf("Insira o preco do convite: ");
	scanf("%f", &precoConv);
	
	minimoConv = custoEsp/precoConv;
	
	printf("O minimo de convites deve ser: %.2f", minimoConv);
	
	return 0;
}
