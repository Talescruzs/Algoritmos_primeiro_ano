//8. Katy Perry quer saber se uma determinada data dos meses janeiro, fevereiro e mar�o do ano de 2020 � v�lida. Para isso fa�a um programa que recebe o dia e o m�s e verifica se a data informada � v�lida ou n�o. Exemplo: 30/02 ? n�o existe, pois, fevereiro � o �nico m�s que possui menos que 30 dias.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float dia, mes;
	
	//entrada
	printf("Digite o n�mero do m�s desejado\n1 = Janeiro\n2 = Fevereiro\n3 = Mar�o\n");
	scanf("%f", &mes);

	printf("Digite o dia desejado: ");
	scanf("%f", &dia);
	
	//processamento e sa�da
	if(mes == 1){
		if(dia >= 1 && dia <= 31){
			printf("Este dia � v�lido");
		}else {
			printf("Este dia n�o � v�lido");
		}
	}if(mes == 2){
		if(dia >= 1 && dia <= 28){
			printf("Este dia � v�lido");
		}else if(dia == 29){	
		printf("Este dia � v�lido em anos bissextos");	
		}else {
			printf("Este dia n�o � v�lido");
		}
	}if(mes == 3){
		if(dia >= 1 && dia <= 31){
			printf("Este dia � v�lido");
		}else {
			printf("Este dia n�o � v�lido");
		}
	}

	return 0;
}
