//10. Para conseguir sair do cativeiro de Beyonc�, Sia precisava compor pelo menos 2 m�sicas por semana. Considerando o tempo de 6 meses, fa�a um algoritmo que recebe a quantidade de can��es compostas e mostre se ela pode sair ou n�o. Caso seja digitado um valor negativo mostre a mensagem �1, 2, 3 sai do chandelier!�.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n;
	
	//entrada
	printf("Quantas can��es foram compostas nos ultimos 6 meses: ");
	scanf("%f", &n);
	//processamento e sa�da
	if( n >= 48){
		printf("Pode sair");
	}else if(n < 48 && n >= 0){
		printf("N�o pode sair");
	}else {
		printf("1, 2, 3 sai do chandelier!");
	}
	
	return 0;
}
