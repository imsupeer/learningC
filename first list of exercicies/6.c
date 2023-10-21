#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float baseme, basema, altura, areaTotal;
	printf("Informe o tamanho da base menor do trapezio: ");
	scanf("%f", &baseme);
	
	printf("Informe o tamanho da base maior do trapezio: ");
	scanf("%f", &basema);
	
	printf("Informe a altura do trapezio: ");
	scanf("%f", &altura);
	
	areaTotal = ((baseme + basema) * altura)/2;
	
	printf("A area do trapezio e: %.2f u.a", areaTotal);
	
	return 0;
}
