#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int saque, notas100, notas50, notas20, notas10, notas5, notas2, notas1;
	printf("Insira o valor de saque: ");
	scanf("%d", &saque);
	
	notas100 = saque / 100;
	notas50 = (saque - (notas100 * 100)) / 50;
	notas20 = (saque - (notas100 * 100 + (notas50 * 50))) / 20;
	notas10 = (saque - (notas100 * 100 + (notas50 * 50 + (notas20 * 20)))) / 10;
	notas5 = (saque - (notas100 * 100 + (notas50 * 50 + (notas20 * 20 + (notas10* 10))))) / 5;
	notas2 = (saque - (notas100 * 100 + (notas50 * 50 + (notas20 * 20 + (notas10* 10 + (notas5 * 5)))))) / 2;
	notas1 = (saque - (notas100 * 100 + (notas50 * 50 + (notas20 * 20 + (notas10* 10 + (notas5 * 5 + (notas2 * 2))))))) / 1;
	
	printf("\n%d nota(s) de R$ 100,00", notas100);
	printf("\n%d nota(s) de R$ 50,00", notas50);
	printf("\n%d nota(s) de R$ 20,00", notas20);
	printf("\n%d nota(s) de R$ 10,00", notas10);
	printf("\n%d nota(s) de R$ 5,00", notas5);
	printf("\n%d nota(s) de R$ 2,00", notas2);
	printf("\n%d nota(s) de R$ 1,00", notas1);
	
	return 0;
}
