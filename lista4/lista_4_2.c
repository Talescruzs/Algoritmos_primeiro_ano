//2. Receba um n�mero inteiro e mostre se ele par ou �mpar.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");	
	int n;
	
	//entrada
	printf("Digite um n�mero qualquer ");
	scanf("%d",&n);
	//processamento e sa�da
	if(n % 2 == 0){
		printf("\nO n�mero %d � par", n);
	}else printf("\nO n�mero %d � impar", n);
	
	return 0;
}
