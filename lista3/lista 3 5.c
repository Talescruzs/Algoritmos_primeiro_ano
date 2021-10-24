/*Lista 03 questão 5*/

#include<stdio.h>

int main(){
	float pd, bis, pcq, vf;

	//entrada	
	printf("digite quantos quilos de pão doce são desejados: ");
	scanf("%f", &pd);
	
	printf("digite quantos quilos de bisnaguinha são desejadas: ");
	scanf("%f", &bis);
	
	printf("digite quantos quilos de pão de cachorro-quente são desejados: ");
	scanf("%f", &pcq);
	
	//processamento	
	
	vf = pd * 5.35 + bis * 6.22 + pcq * 8.98;

	//saida
	
	printf("o valor a ser pago e de: %f", vf);
	
	return 0;
}
