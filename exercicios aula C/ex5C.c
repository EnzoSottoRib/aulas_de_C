#include <stdio.h>

main(){
	
	float largura, comprimento, area, consumo;
	
	printf("Digite a largura: ");
	scanf("%f", &largura);
	
	printf("Digite o comprimento: ");
	scanf("%f", &comprimento);
	
	area = largura * comprimento;
	
	consumo = area*18;
	
	printf("A �rea � de: %f e o consumo de pot�ncia � de: %f",area, consumo);
	
	return 0;
	
}
