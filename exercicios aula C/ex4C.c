#include <stdio.h>

main(){
	
	float val, perc, multa, valtot;
	int dias;
	
	printf("Digite o valor total devido: ");
	scanf("%f", &val);
	
	printf("Digite a quantidade de dias: ");
	scanf("%d", &dias);
	
	printf("Digite a porcentagem da multa: ");
	scanf("%f", &perc);
	
	multa = val * (perc/100)*dias;
	valtot = val+multa;
	
	printf("Valor total: %f, valor da multa: %f", valtot, multa);
	
	return 0;	
	
}
