//8. Katy Perry quer saber se uma determinada data dos meses janeiro, fevereiro e março do ano de 2020 é válida. Para isso faça um programa que recebe o dia e o mês e verifica se a data informada é válida ou não. Exemplo: 30/02 ? não existe, pois, fevereiro é o único mês que possui menos que 30 dias.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float dia, mes;
	
	//entrada
	printf("Digite o número do mês desejado\n1 = Janeiro\n2 = Fevereiro\n3 = Março\n");
	scanf("%f", &mes);

	printf("Digite o dia desejado: ");
	scanf("%f", &dia);
	
	//processamento e saída
	if(mes == 1){
		if(dia >= 1 && dia <= 31){
			printf("Este dia é válido");
		}else {
			printf("Este dia não é válido");
		}
	}if(mes == 2){
		if(dia >= 1 && dia <= 28){
			printf("Este dia é válido");
		}else if(dia == 29){	
		printf("Este dia é válido em anos bissextos");	
		}else {
			printf("Este dia não é válido");
		}
	}if(mes == 3){
		if(dia >= 1 && dia <= 31){
			printf("Este dia é válido");
		}else {
			printf("Este dia não é válido");
		}
	}

	return 0;
}
