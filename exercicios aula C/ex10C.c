#include <stdio.h>

main(){
	
	float salmin, quilogasto, valquilo, valpago;
	
	printf("Digite o salário mínimo: ");
	scanf("%f", &salmin);
	
	valquilo = salmin/700;
	
	printf("Digite a quantidade gasta de quillowatts: ");
	scanf("%f", &quilogasto);
	
	valpago = valquilo*quilogasto;
	
	printf("O valor e reais de cada quilowatt é: R$%f, e o valor em reais a ser pago é: R$%f", valquilo, valpago);
	
	return 0;
	
	
	
	
}
