/*Lista 03 questão 6*/

#include<stdio.h>

int main(){
	float numerodecimal;
	int numerointeiro;

	//entrada	
	printf("digite um numero decimal qualquer: ");
	scanf("%f", &numerodecimal);

	
	//processamento	
	
	numerointeiro = numerodecimal;
	
	//saida
	
	printf("\na parte inteira dele equivale a: %d", numerointeiro);
	
	return 0;
}
