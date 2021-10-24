//3. Uma melhor cantora da cena Pop atual, chamada Ariana Grande decidiu dar um aumento de 10% no salário de seus empregados que trabalham com ela por pelo menos 3 anos. Para os demais o aumento será de 18%. Portanto, faça um programa que recebe o tempo (em anos) de serviço de um trabalhador e seu salário (em Dólares) e mostre qual será seu salário após o reajuste.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");	
	float sali, salf, aument, temp;
	
	//entrada
	printf("A quantos anos você trabalha para a melhor cantora Pop atual, Ariana Grande? ");
	scanf("%f", &temp);
	printf("Qual o seu salário em Dolares? ");
	scanf("%f", &sali);
	
	//processamento 
	if(temp >= 3){
		aument = (sali * 10 / 100);
		salf = sali + aument;
	} else {
		aument = (sali * 18 / 100);
		salf = sali + aument;
	}
	
	//saída
	printf("Seu aumeto é de %f Dólares", aument);
	printf("\nSeu salário séra de %f Dólares", salf);

	
	return 0;
}
