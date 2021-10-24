//5. No clipe Rain on me podemos notar uma grande quantidade de maquiagens sendo utilizadas. Para isso, faça um programa que recebe dois valores inteiros: o primeiro se refere a qual opção de maquiagem será consultada e o segundo diz respeito a quantidade.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float alt, quant, pag;
	
	//entrada
	printf("Digite o numero da maquiagem correspondente:\n");
	printf("1 = Lip tint\n2 = Lápis de olho\n3 = Cílios postiços\n");
	scanf("%f", &alt);
	
	if (alt == 1 || alt == 2 || alt == 3){
		printf("digite a quantidade desejada: ");
		scanf("%f", &quant);

	//processamento e saída
		if(alt == 1){
			pag = quant * 33.22;
			printf("o valor a ser pago é de %f", pag);		
		}else if(alt == 2){
			pag = quant * 14.89;
			printf("o valor a ser pago é de %f", pag);	
		}else if(alt == 3){
			pag = quant * 8.65;
			printf("o valor a ser pago é de %f", pag);	
		}
	}else {
		printf("Não foi possivel realizar a operação");
	}
	return 0;
}
