//1. Calcule m�dia final da disciplina de Algoritmos e Programa��o, mostre a m�dia final e uma mensagem informando se o aluno foi aprovado (m�dia >= 7) ou reprovado. Considere tr�s avalia��es.

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
	
	//sa�da
	if(Medf < 7){
	printf("Sua m�dia final foi %f, voc� est� reprovado", Medf);
	}else printf("Sua m�dia foi %f, voc� est� aprovado", Medf);
	
	return 0;
}

