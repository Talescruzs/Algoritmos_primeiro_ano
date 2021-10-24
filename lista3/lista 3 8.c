/*Lista 03 questão 8*/

#include<stdio.h>

int main(){
	float ano, dia;

	//entrada	
	printf("digite sua idade em anos: ");
	scanf("%f", &ano);

	
	//processamento	
	
	dia = ano * 365;
	
	//saida
	
	printf("\nvoce tem %f dias de idade, aproximadamente.", dia);
	
	return 0;
}
