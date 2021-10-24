/*1. Desenvolva um algoritmo que encontra o cubo de um número inteiro qualquer.*/

#include<stdio.h>

int main(){
	int cubo, inteiro;
	
	//entrada
	printf("digite um numero inteiro: ");
	scanf("%d", &inteiro);
	
	//processamento
	cubo = inteiro * inteiro * inteiro;
	
	//saida
	printf("\no cubo calculado: %d\n" , cubo);
	
	return 0;
}
