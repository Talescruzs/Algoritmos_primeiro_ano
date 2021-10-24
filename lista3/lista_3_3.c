/*Lista 03 questão 3*/

#include<stdio.h>

int main(){
	float numr1, numr2, soma, sub, mult, div;

	//entrada	
	printf("digite um numero decimal qualquer: ");
	scanf("%f", &numr1);
	
	printf("digite outro numero decimal qualquer: ");
	scanf("%f", &numr2);

	//processamento	

	soma = numr1 + numr2;
	sub = numr1 - numr2;
	mult = numr1 * numr2;
	div = numr1 / numr2;

	//saida
	
	printf("\na soma dos numeros resulta em: %f", soma);
	printf("\no primeiro numero menos o segundo numero resulta em: %f", sub);
	printf("\no primeiro numero multiplicado pelo segundo numero resulta em: %f", mult);
	printf("\no primeiro numero dividido pelo segundo numero resulta em: %f", div);
	
	return 0;
}
