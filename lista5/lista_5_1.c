//1. Lady Gaga e Ariana Grande fizeram chover muito na semana passada. Fa�a um algoritmo que recebe a quantidade de chuvas dos �ltimos 3 meses, fa�a uma m�dia e mostre na tela qual(is) quantidade(s) fico(aram) acima da m�dia calculada.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float ch1, ch2, ch3, chmd;
	
	//entrada
	printf("digite a quantidade de chuva no primeiro m�s: ");
	scanf("%f", &ch1);
	printf("digite a quantidade de chuva no segundo m�s: ");
	scanf("%f", &ch2);
	printf("digite a quantidade de chuva no terceiro m�s: ");
	scanf("%f", &ch3);
	//processamento
	chmd = (ch1 + ch2 + ch3) / 3;
	//sa�da
	printf("A m�dia de chuva dos ultimos 3 meses foi %f\n", chmd);
	
	if(ch1 > chmd){
		printf("No primeiro m�s choveu acima da m�dia");
	}if(ch2 > chmd){
		printf("No segundo m�s choveu acima da m�dia");
	}if(ch3 > chmd){
		printf("No terceiro m�s choveu acima da m�dia");
	}else {
		printf("Choveu igualmente nos 3 meses");
	}
	
	return 0;
}
