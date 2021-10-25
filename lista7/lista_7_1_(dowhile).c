/*1. Crie um algoritmo que declare um inteiro, inicialize-o com 0 (zero), e incremente-o de
1.000 em 1.000, exibindo seu valor na tela, até que seu valor seja igual a 100.000 (cem mil).*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n=0, i;
	
	i==0;
	do{
		n=n+1000;
		printf("%d\n", n);
		i++;
	}while(i<=100);
	return 0;
}
