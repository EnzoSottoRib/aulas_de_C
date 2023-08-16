#include <stdio.h>

main(){
	
	float val, prom, valfin;
	
	printf("Digite o valor do produto: ");
	scanf("%f", &val);
	
	printf("Digite o desconto: ");
	scanf("%f", &prom);
	
	valfin = val-prom;
	
	printf("O valor final do produto é de: %f", valfin);
	
	return 0;
	
}
