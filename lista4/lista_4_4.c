//4. Considere as seguintes classes sociais:
//Espere do usuário um valor em reais e mostre em qual das classes sociais ele está inserido.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");	
	float money;
	
	//entrada
	printf("Digite sua renda: ");
	scanf("%f",&money);
	//processamento e saída
	if (money < 786){
		printf("Você é da classe E");
	}else if (786 <= money && money < 1196.5){
		printf("Você é da classe D");
	}else if (1196.5 <= money && money < 2165){
		printf("Você é da classe C2");
	}else if (2165 <= money && money < 3778.5){
		printf("Você é da classe C1");
	}else if (3778.5 <= money && money < 7053){
		printf("Você é da classe B2");
	}else if (7053 <= money && money < 15071){
		printf("Você é da classe B1");
	}else if (15071 <= money && money < 20888){
		printf("Você é da classe A2");
	}else if (20888 <= money){
		printf("Você é da classe A1");
	}
	
	
	return 0;
}
