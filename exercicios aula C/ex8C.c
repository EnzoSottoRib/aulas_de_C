#include <stdio.h>

main(){
	
	float val, jur, divid;
	
	printf("Digite o valor da d�vida: ");
	scanf("%f", &val);
	
	printf("Digite o juros: ");
	scanf("%f", &jur);
	
	divid = val + val*jur/100;
	
	printf("O valor da d�vida no m�s seguinte � de: R$%f", divid);
	
	return 0;
	
}
