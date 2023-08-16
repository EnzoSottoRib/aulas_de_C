#include <stdio.h>

int main(){
	
	float a, b, c;
	
	printf("Digite o valor de A: ");
	scanf("%f", & a);
	
	printf("Digite o valor de B: ");
	scanf("%f", & b);
	
	c = (a + b) * b;
	
	printf("O resultado é: %f", c);
	
	return 0;
}
