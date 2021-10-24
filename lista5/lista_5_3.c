//3. Ariana Grande se deparou com um grande problema, ela precisa calcular quando está recebendo pelos clipes nos quais ela participa. A dangerous woman quer saber qual dos seus 3 últimos clipes lhe rendeu mais. Dessa forma, faça um programa que recebe 3 valores decimais, some e mostre na tela e ainda mostre qual deles é o maior.


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float clp1, clp2, clp3;
	
	//entrada
	printf("digite os rendimentos do primeiro clip: ");
	scanf("%f", &clp1);
	printf("digite os rendimentos do segundo clip: ");
	scanf("%f", &clp2);
	printf("digite os rendimentos do terceiro clip: ");
	scanf("%f", &clp3);
	//processamento e saída
	printf("Ariana Grande, a diva do Pop, faturou %f com seus tres ultimos clips\n", clp1 + clp2 + clp3);
	
	if(clp1 > clp2 && clp1 > clp3){
		printf("O primeiro clip foi o mais rentável");
	}if(clp2 > clp1 && clp2 > clp3){
		printf("O segundo clip foi o mais rentável");
	}if(clp3 > clp1 && clp3 > clp2){
		printf("O terceiro clip foi o mais rentável");
	}
	
	return 0;
}
