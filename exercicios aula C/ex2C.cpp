#include <stdio.h>
#include <locale.h>

int main(){
	
	float v, r, a, pi;
	pi = 3.14;
	
	printf("Digite o valor do raio: ");
	scanf("%f", & r);
	
	printf("Digite o valor da altura: ");
	scanf("%f", & a);
	
	v = pi * (r*r) * a;
	
	printf("O volume da lata é: %f", v);
	
	return 0;
}

