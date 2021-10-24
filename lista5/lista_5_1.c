//1. Lady Gaga e Ariana Grande fizeram chover muito na semana passada. Faça um algoritmo que recebe a quantidade de chuvas dos últimos 3 meses, faça uma média e mostre na tela qual(is) quantidade(s) fico(aram) acima da média calculada.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float ch1, ch2, ch3, chmd;
	
	//entrada
	printf("digite a quantidade de chuva no primeiro mês: ");
	scanf("%f", &ch1);
	printf("digite a quantidade de chuva no segundo mês: ");
	scanf("%f", &ch2);
	printf("digite a quantidade de chuva no terceiro mês: ");
	scanf("%f", &ch3);
	//processamento
	chmd = (ch1 + ch2 + ch3) / 3;
	//saída
	printf("A média de chuva dos ultimos 3 meses foi %f\n", chmd);
	
	if(ch1 > chmd){
		printf("No primeiro mês choveu acima da média");
	}if(ch2 > chmd){
		printf("No segundo mês choveu acima da média");
	}if(ch3 > chmd){
		printf("No terceiro mês choveu acima da média");
	}else {
		printf("Choveu igualmente nos 3 meses");
	}
	
	return 0;
}
