//4. Considere as seguintes classes sociais:
//Espere do usu�rio um valor em reais e mostre em qual das classes sociais ele est� inserido.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");	
	float money;
	
	//entrada
	printf("Digite sua renda: ");
	scanf("%f",&money);
	//processamento e sa�da
	if (money < 786){
		printf("Voc� � da classe E");
	}else if (786 <= money && money < 1196.5){
		printf("Voc� � da classe D");
	}else if (1196.5 <= money && money < 2165){
		printf("Voc� � da classe C2");
	}else if (2165 <= money && money < 3778.5){
		printf("Voc� � da classe C1");
	}else if (3778.5 <= money && money < 7053){
		printf("Voc� � da classe B2");
	}else if (7053 <= money && money < 15071){
		printf("Voc� � da classe B1");
	}else if (15071 <= money && money < 20888){
		printf("Voc� � da classe A2");
	}else if (20888 <= money){
		printf("Voc� � da classe A1");
	}
	
	
	return 0;
}
