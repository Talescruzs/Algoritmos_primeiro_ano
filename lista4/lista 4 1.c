//1. Calcule média final da disciplina de Algoritmos e Programação, mostre a média final e uma mensagem informando se o aluno foi aprovado (média >= 7) ou reprovado. Considere três avaliações.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float Av1, Av2, Av3, Medf;
	
	//entrada
	printf("Digite sua primeira nota: ");
	scanf("%f", &Av1);
	printf("Digite sua segunda nota: ");
	scanf("%f", &Av2);
	printf("Digite sua terceira nota: ");
	scanf("%f", &Av3);
	
	//processamento
	Medf = (Av1 + Av2 + Av3) / 3;
	
	//saída
	if(Medf < 7){
	printf("Sua média final foi %f, você está reprovado", Medf);
	}else printf("Sua média foi %f, você está aprovado", Medf);
	
	return 0;
}

