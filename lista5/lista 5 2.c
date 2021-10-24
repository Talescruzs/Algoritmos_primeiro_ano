//2. Receba um valor em minutos e informe se esse valor supera 24h.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float m;
	
	//entrada
	printf("digite um valor em minutos: ");
	scanf("%f", &m);
	//processamento e saída
	if((m/60) > 24){
		printf("Este valor supera 24 hora");
	}else{
		printf("Este valor não supera 24 hora");
	}
	
	return 0;
}
