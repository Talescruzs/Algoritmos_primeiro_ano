//5. Uma empresa de fornecimento de internet muito mercen�ria deseja saber se os clientes ultrapassaram o limite de download mensal. Dessa forma, � necess�rio digitar o limite de download e o quanto j� foi utilizado, ambos em gibabytes (GB). O programa deve mostrar se o limite foi atingido e qual a porcentagem j� utilizada (pode ultrapassar 100%)

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float limite, usado, porcentagem;
	
	//entrada
	printf("Digite seu limite de internet em GB: ");
	scanf("%f",&limite);
	printf("Digite quanto foi o uso de internet em GB: ");
	scanf("%f",&usado);
	//processamento 
	porcentagem = (usado * 100) / limite;
	
	//sa�da
	if (porcentagem < 100){
		printf("Voce usou %f%% do limite de internet, ainda n�o atigiu seu limite", porcentagem);
	}else if (porcentagem == 100){
		printf("Voce usou %f%% do limite de internet, atingiu seu limite", porcentagem);
	}else {
		printf("Voce usou %f%% do limite de internet, ultrapassou seu limite", porcentagem);
	}
		
	return 0;
}
