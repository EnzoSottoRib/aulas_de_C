#include <stdio.h>

main(){
	
	float st, pr, ns, va;
	
	printf("Digite o sal�rio atual: ");
	scanf("%f", & st);
	
	printf("Digite a porcentagem de aumento: ");
	scanf("%f", & pr);
	
	ns = st + st*(pr/100);
	va = ns-st;
	
	printf("O novo sal�rio ser� de: R$%f, e o aumento foi de: R$%f", ns, va);
	
	return 0;	
}
