//3. Uma melhor cantora da cena Pop atual, chamada Ariana Grande decidiu dar um aumento de 10% no sal�rio de seus empregados que trabalham com ela por pelo menos 3 anos. Para os demais o aumento ser� de 18%. Portanto, fa�a um programa que recebe o tempo (em anos) de servi�o de um trabalhador e seu sal�rio (em D�lares) e mostre qual ser� seu sal�rio ap�s o reajuste.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");	
	float sali, salf, aument, temp;
	
	//entrada
	printf("A quantos anos voc� trabalha para a melhor cantora Pop atual, Ariana Grande? ");
	scanf("%f", &temp);
	printf("Qual o seu sal�rio em Dolares? ");
	scanf("%f", &sali);
	
	//processamento 
	if(temp >= 3){
		aument = (sali * 10 / 100);
		salf = sali + aument;
	} else {
		aument = (sali * 18 / 100);
		salf = sali + aument;
	}
	
	//sa�da
	printf("Seu aumeto � de %f D�lares", aument);
	printf("\nSeu sal�rio s�ra de %f D�lares", salf);

	
	return 0;
}
