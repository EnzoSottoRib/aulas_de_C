#include <stdio.h>

main(){
	
	float conta, valtaxa, valfinal;
	
	printf("Digite o valor da conta: ");
	scanf("%f", &conta);
	
	valtaxa = conta*10/100;
	valfinal = conta + valtaxa;
	
	printf("O valor da taxa é: %f, e o valor final é: %f", valtaxa, valfinal);
	
	return 0;
}
