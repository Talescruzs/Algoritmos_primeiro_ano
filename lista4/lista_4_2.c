//2. Receba um número inteiro e mostre se ele par ou ímpar.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");	
	int n;
	
	//entrada
	printf("Digite um número qualquer ");
	scanf("%d",&n);
	//processamento e saída
	if(n % 2 == 0){
		printf("\nO número %d é par", n);
	}else printf("\nO número %d é impar", n);
	
	return 0;
}
