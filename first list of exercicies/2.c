#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int n1, n2, n3;
	printf("Insira 3 valores para serem multiplicados: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	int multiTotal = n1 * n2 * n3;
	printf("O resultado da multiplicacao e: %d", multiTotal);
	
	return 0;
}
