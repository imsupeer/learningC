#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double saque;
	int notas100, notas50, notas20, notas10, notas5, notas2, moeda1, moeda050, moeda025, moeda010, moeda005, moeda001;
	printf("Digite o valor do saque: ");
	scanf("%lf", &saque);
	
	notas100 = saque/100;
	saque = saque - (notas100 * 100);
	
	notas50 = saque/50;
	saque = saque - (notas50 * 50);
	
	notas20 = saque/20;
	saque = saque - (notas20 * 20);
	
	notas10 = saque/10;
	saque = saque - (notas10 * 10);
	
	notas5 = saque/5;
	saque = saque - (notas5 * 5);
	
	notas2 = saque/2;
	saque = saque - (notas2 * 2);
	
	moeda1 = saque/1;
	saque = saque - (moeda1 * 1);
	
	moeda050 = saque/0.50;
	saque = saque - (moeda050 * 0.50);
	
	moeda025 = saque/0.25;
	saque = saque - (moeda025 * 0.25);
	
	moeda010 = saque/0.10;
	saque = saque - (moeda010 * 0.10);
	
	moeda005 = saque/0.05;
	saque = saque - (moeda005 * 0.05);
	
	moeda001 = saque/0.01;
	saque = saque - (moeda001 * 0.01);
	
	printf("\nNOTAS");
	printf("\n%d nota(s) de R$ 100,00", notas100);
	printf("\n%d nota(s) de R$ 50,00", notas50);
	printf("\n%d nota(s) de R$ 20,00", notas20);
	printf("\n%d nota(s) de R$ 10,00", notas10);
	printf("\n%d nota(s) de R$ 5,00", notas5);
	printf("\n%d nota(s) de R$ 2,00", notas2);
	
	printf("\nMOEDAS");
	printf("\n%d moeda(s) de R$ 1.00", moeda1);
	printf("\n%d moeda(s) de R$ 0.50", moeda050);
	printf("\n%d moeda(s) de R$ 0.25", moeda025);
	printf("\n%d moeda(s) de R$ 0.10", moeda010);
	printf("\n%d moeda(s) de R$ 0.05", moeda005);
	printf("\n%d moeda(s) de R$ 0.01", moeda001);
	
	return 0;
}
