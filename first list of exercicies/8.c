#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

int main(){
	int r;
	printf("Informe o valor do raio: ");
	scanf("%d", &r);
	
	float c;
	c = 2 * PI * r;
	
	float a;
	a = PI * (pow(r,2));
	
	float v, r3;
	r3 = pow(r,3);
	v = (4 * PI * r3)/3;
	
	printf("\nO comprimento da esfera e: %.2f u.c", c);
	printf("\nA area da esfera e: %.2f u.a", a);
	printf("\nO volume da esfera e: %.2f u.v", v);
	
	return 0;
}
