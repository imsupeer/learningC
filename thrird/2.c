#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int numero, centenas, dezenas, unidades;
	printf("Digite um numero de 3 digitos que devera ser fatorado: ");
	scanf("%d", &numero);
	
	centenas = numero / 100;
	dezenas = (numero - (centenas * 100)) / 10;
	unidades = numero - ((centenas * 100) + (dezenas * 10));
	
	printf("\nCentenas = %d", centenas);
	printf("\nDezenas = %d", dezenas);
	printf("\nUnidades = %d", unidades);
	
	return 0;
}
