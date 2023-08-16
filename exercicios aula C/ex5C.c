#include <stdio.h>

main(){
	
	float largura, comprimento, area, consumo;
	
	printf("Digite a largura: ");
	scanf("%f", &largura);
	
	printf("Digite o comprimento: ");
	scanf("%f", &comprimento);
	
	area = largura * comprimento;
	
	consumo = area*18;
	
	printf("A área é de: %f e o consumo de potência é de: %f",area, consumo);
	
	return 0;
	
}
