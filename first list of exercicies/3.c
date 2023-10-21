#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float precoI, precoF;
	printf("Insira o preco do produto: ");
	scanf("%f", &precoI);
	
	precoF = precoI - (precoI * 0.1);
	
	printf("O valor final do produto e %.2f", precoF);
	
	return 0;
}
