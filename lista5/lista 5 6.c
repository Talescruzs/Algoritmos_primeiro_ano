//6. Na música “A horse with no name” é evidenciada uma trajetória de fatos que acontecem com o cavalo e uma pessoa. Nesse sentido, hipoteticamente receba o um valor em milhas cavalgadas pelo cavalo. Se a quantidade de milhas for até 7 mostre na tela “Trajeto relativamente curto”, se for maior que 7 e menor que 12 mostre “cavalo cansado” e se for maior que 12 mostre “let the horse with no name run free NOW!”. Caso seja digitado 0 ou um número negativo mostre um trecho da música que você mais gostou.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float mi;
	
	//entrada
	printf("Digite quantas milhas foram cavalgadas: ");
	scanf("%f", &mi);

	//processamento e saída
	if(mi > 0 && mi <= 7){
		printf("Trajeto relativamente curto");
		
	}else if(mi > 7 && mi <= 12){
		printf("cavalo cansado");
		
	}else if(mi > 12){
		printf("let the horse with no name run free NOW!");
		
	}else {
		printf("La la, la, la la la la, la la la, la, la");
	}
	
	return 0;
}
