/*Lista 03 questão 2*/

#include<stdio.h>

int main(){
	float Fahrenheit, Celsius;

	//entrada	
	printf("digite uma temperatura em graus Celsius: ");
	scanf("%f", &Celsius);
	
	//processamento	
	Fahrenheit = Celsius * 9 / 5 + 32;

	//saida
	printf("\nem Fahrenheit, essa temperatura equivale a: %f graus Fahrenheit \n", Fahrenheit);
	
	return 0;
}
