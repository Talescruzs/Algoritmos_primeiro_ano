//10. Para conseguir sair do cativeiro de Beyoncé, Sia precisava compor pelo menos 2 músicas por semana. Considerando o tempo de 6 meses, faça um algoritmo que recebe a quantidade de canções compostas e mostre se ela pode sair ou não. Caso seja digitado um valor negativo mostre a mensagem “1, 2, 3 sai do chandelier!”.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n;
	
	//entrada
	printf("Quantas canções foram compostas nos ultimos 6 meses: ");
	scanf("%f", &n);
	//processamento e saída
	if( n >= 48){
		printf("Pode sair");
	}else if(n < 48 && n >= 0){
		printf("Não pode sair");
	}else {
		printf("1, 2, 3 sai do chandelier!");
	}
	
	return 0;
}
