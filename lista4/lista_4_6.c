//6. Considerando o sistema de votos do Big Brother Brasil, fa�a um programa que recebe o total de votos computados e a porcentagem de votos de um determinado participante. Caso, a porcentagem seja maior ou igual a 80% deve mostrar �Alta rejei��o�, se estiver entre 40% e79% mostrar �M�dia rejei��o� e por fim menor que 40% �Baixa rejei��o�. Ainda, mostre a quantidade de votos equivalente ao percentual digitado.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float votost, votosp, porcentagem;
	
	//entrada
	printf("Digite o n�mero total de votos da vota��o: ");
	scanf("%f",&votost);
	printf("Digite a porcentagem de votos do participante em quest�o: ");
	scanf("%f",&porcentagem);
	//processamento
	votosp = (votost * porcentagem) / 100;
	
	//sa�da
	if(porcentagem >= 80 ){
		printf ("O n�mero de votos desse participante � %f", votosp);
		printf ("\nAlta rejei��o");
	}else if(porcentagem < 80 && porcentagem >= 40) {
		printf ("O n�mero de votos desse participante � %f", votosp);
		printf("\nM�dia rejei��o");
	}else{
		printf ("O n�mero de votos desse participante � %f", votosp);
		printf("\nBaixa rejei��o");
	}
		
	return 0;
}
