#include <stdio.h>

main(){
	
	float salmin, quilogasto, valquilo, valpago;
	
	printf("Digite o sal�rio m�nimo: ");
	scanf("%f", &salmin);
	
	valquilo = salmin/700;
	
	printf("Digite a quantidade gasta de quillowatts: ");
	scanf("%f", &quilogasto);
	
	valpago = valquilo*quilogasto;
	
	printf("O valor e reais de cada quilowatt �: R$%f, e o valor em reais a ser pago �: R$%f", valquilo, valpago);
	
	return 0;
	
	
	
	
}
