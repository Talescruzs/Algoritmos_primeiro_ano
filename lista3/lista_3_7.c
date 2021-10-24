/*Lista 03 questão 7*/

#include<stdio.h>

int main(){
	float m, dm, cm, mm;

	//entrada	
	printf("digite um valor em metro: ");
	scanf("%f", &m);

	
	//processamento	
	
	dm = 10 * m;
	cm = 100 * m;
	mm = 1000 * m;
	
	//saida
	
	printf("\nisso resulta em %f decimetros, ", dm);
	printf("%f centimetros", cm);
	printf(" e %f milimetros", mm);
	
	return 0;
}
