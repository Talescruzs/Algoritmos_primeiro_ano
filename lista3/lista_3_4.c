/*Lista 03 quest�o 4*/

#include<stdio.h>

int main(){
	float valor, lucro, vf, vp;

	//entrada	
	printf("digite o pre�o do alcool em gel: ");
	scanf("%f", &valor);
	
	printf("\ndigite a porcentagem da margem de lucro: ");
	scanf("%f", &lucro);

	//processamento	

	vf = valor * lucro / 100;
	vp = vf + valor;

	//saida
	
	printf("\no pre�o final do alcool sera de: %f reais", vp);
	
	return 0;
}
