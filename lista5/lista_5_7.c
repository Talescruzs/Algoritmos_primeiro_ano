//7. Os integrantes da banda 5SOS desejam doar seu (young)blood [sangue] para um  Michael e Ashton, desenvolva um algoritmo que recebe a idade de cada um deles e verifica se eles est�o aptos a doarem seu sangue. Para estar apto a doar sangue � necess�rio ter pelo menos 18 anos e menos 68.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float lk, cl, mc, as;
	
	//entrada
	printf("");
	scanf("%f", &lk);
	printf("");
	scanf("%f", &cl);
	printf("");
	scanf("%f", &mc);
	printf("");
	scanf("%f", &as);

	//processamento e sa�da
	if(lk >= 18 && lk < 68){
		printf("Luke est� apto a doar sangue\n");
	}else {
		printf("Luke n�o est� apto a doar sangue\n");
	}
	if(cl >= 18 && cl < 68){
		printf("Calum est� apto a doar sangue\n");
	}else {
		printf("Calum n�o est� apto a doar sangue\n");
	}
	if(mc >= 18 && mc < 68){
		printf("Michael est� apto a doar sangue\n");
	}else {
		printf("Michael n�o est� apto a doar sangue\n");
	}
	if(as >= 18 && as < 68){
		printf("Ashton est� apto a doar sangue\n");
	}else {
		printf("Ashton n�o est� apto a doar sangue\n");
	}
	
	return 0;
}
