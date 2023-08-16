#include <stdio.h>

main(){
	
	float valhora, numaula, percent, salbrut;
	
	printf("Digite o valor da hora e aula: ");
	scanf("%f", &valhora);
	
	printf("Digite a quantidade de aulas: ");
	scanf("%f", &numaula);
	
	printf("Digite o percentual do INSS: ");
	scanf("%f", &percent);
	
	
	salbrut = valhora*numaula - valhora*numaula*(percent/100);
	
	printf("O salário bruto é de: R$%f", salbrut);
	
	return 0;
	
}
