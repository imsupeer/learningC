#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int n1, n2;
	printf("Insira dois numeros inteiros: ");
	scanf("%d %d", &n1, &n2);
	
	int subtracao = n1 - n2;
	printf("%d", subtracao);
        return 0;
}
