#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float tempoGasto, velMedia, distancia, litros;
	printf("Insira o tempo gasto de viagem: ");
	scanf("%f", &tempoGasto);
	
	printf("Insira a velocidade media: ");
	scanf("%f", &velMedia);
	
	distancia = tempoGasto * velMedia;
	litros = distancia/12;
	
	printf("A quantidade ded litros necessaria para a viagem eh: %.3f", litros);
	
	return 0;
}
