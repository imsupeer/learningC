#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float p1, p2, p3, x1, x2, y1, y2;
	printf("Insira o valor de x1 e y1 respectivamente: ");
	scanf("%f %f", &x1, &y1);
	
	printf("Insira o valor de x2 e y2 respectivamente: ");
	scanf("%f %f", &x2, &y2);
	
	p1 = x2 - x1;
	p1 = pow(p1,2);
	
	p2 = y2 - y1;
	p2 = pow(p2,2);
	
	p3 = p1 + p2;
	p3 = sqrt(p3);
	
	printf("A distancia entre os pontos eh: %.4f", p3);
	
	return 0;
}
