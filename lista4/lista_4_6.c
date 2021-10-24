//6. Considerando o sistema de votos do Big Brother Brasil, faça um programa que recebe o total de votos computados e a porcentagem de votos de um determinado participante. Caso, a porcentagem seja maior ou igual a 80% deve mostrar “Alta rejeição”, se estiver entre 40% e79% mostrar “Média rejeição” e por fim menor que 40% “Baixa rejeição”. Ainda, mostre a quantidade de votos equivalente ao percentual digitado.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float votost, votosp, porcentagem;
	
	//entrada
	printf("Digite o número total de votos da votação: ");
	scanf("%f",&votost);
	printf("Digite a porcentagem de votos do participante em questão: ");
	scanf("%f",&porcentagem);
	//processamento
	votosp = (votost * porcentagem) / 100;
	
	//saída
	if(porcentagem >= 80 ){
		printf ("O número de votos desse participante é %f", votosp);
		printf ("\nAlta rejeição");
	}else if(porcentagem < 80 && porcentagem >= 40) {
		printf ("O número de votos desse participante é %f", votosp);
		printf("\nMédia rejeição");
	}else{
		printf ("O número de votos desse participante é %f", votosp);
		printf("\nBaixa rejeição");
	}
		
	return 0;
}
