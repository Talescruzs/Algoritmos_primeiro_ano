//5. No clipe Rain on me podemos notar uma grande quantidade de maquiagens sendo utilizadas. Para isso, fa�a um programa que recebe dois valores inteiros: o primeiro se refere a qual op��o de maquiagem ser� consultada e o segundo diz respeito a quantidade.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float alt, quant, pag;
	
	//entrada
	printf("Digite o numero da maquiagem correspondente:\n");
	printf("1 = Lip tint\n2 = L�pis de olho\n3 = C�lios posti�os\n");
	scanf("%f", &alt);
	
	if (alt == 1 || alt == 2 || alt == 3){
		printf("digite a quantidade desejada: ");
		scanf("%f", &quant);

	//processamento e sa�da
		if(alt == 1){
			pag = quant * 33.22;
			printf("o valor a ser pago � de %f", pag);		
		}else if(alt == 2){
			pag = quant * 14.89;
			printf("o valor a ser pago � de %f", pag);	
		}else if(alt == 3){
			pag = quant * 8.65;
			printf("o valor a ser pago � de %f", pag);	
		}
	}else {
		printf("N�o foi possivel realizar a opera��o");
	}
	return 0;
}
