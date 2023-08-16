#include <stdio.h>

main(){
	
	float val, jur, divid;
	
	printf("Digite o valor da dívida: ");
	scanf("%f", &val);
	
	printf("Digite o juros: ");
	scanf("%f", &jur);
	
	divid = val + val*jur/100;
	
	printf("O valor da dívida no mês seguinte é de: R$%f", divid);
	
	return 0;
	
}
