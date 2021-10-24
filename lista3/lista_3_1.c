/*Lista 03 questão 1*/

#include<stdio.h>

int main(){
	float soma, quadrado, divisao, primeironumero, segundonumero;
	
	//entrada
	printf("digite um numero inteiro qualquer: ");
	scanf("%f", &primeironumero);
	
	printf("digite outro numero inteiro qualquer: ");
	scanf("%f", &segundonumero);
	
	//processamento
	soma = primeironumero + segundonumero;
	quadrado = segundonumero * segundonumero;
	divisao = segundonumero / primeironumero;
	
	//saida
	printf("\na soma dos numeros resulta em: %f\n" , soma);
	printf("o quadrado do segundo numero resulta em:%f \n", quadrado); 
	printf("a divisão do segundo numero pelo primeiro resulta em: %f \n", divisao);
	
	return 0;
}
