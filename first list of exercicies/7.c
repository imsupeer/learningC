#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	int ca, co, h1, h2;
	printf("Informe o valor do cateto adjacente: ");
	scanf("%d", &ca);
	
	printf("Informe o valor do cateto oposto: ");
	scanf("%d", &co);
	
	h1 = pow(ca,2) + pow(co,2);
	h2 = sqrt(h1);
	
	printf("A hipotenusa equivale a: %d", h2);
	 
	
	return 0;
}
