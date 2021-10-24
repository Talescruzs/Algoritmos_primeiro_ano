/*2. Faça um algoritmo que converte uma velocidade de km/h para m/s.*/

#include<stdio.h>

int main(){	
	float kmh, ms;
	
	//entrada
	printf("digite uma velocidade em km/h: ");
	scanf("%f", &kmh);
	
	//processamento 
	ms = kmh / 3.6;
	
	//saida
	printf("essa velocidade em m/s equivale a: %f", ms);
	
	return 0;
}
