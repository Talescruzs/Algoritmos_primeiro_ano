/*Lista 03 questão 10*/

#include<stdio.h>

int main() {
	int h, min, seg;
	
	//entrada
	printf("digite um valor inteiro em horas: ");
	scanf("%d", &h);
	
	//processamento
	
	min = h * 60;
	seg = min * 60;
	
	//saida	
	
	printf("\nem minutos isso equivale a: %d", min);
	printf("\nem segundos isso equivale a: %d", seg);
	
	return 0;
}
