/*Lista 03 quest�o 5*/

#include<stdio.h>

int main(){
	float pd, bis, pcq, vf;

	//entrada	
	printf("digite quantos quilos de p�o doce s�o desejados: ");
	scanf("%f", &pd);
	
	printf("digite quantos quilos de bisnaguinha s�o desejadas: ");
	scanf("%f", &bis);
	
	printf("digite quantos quilos de p�o de cachorro-quente s�o desejados: ");
	scanf("%f", &pcq);
	
	//processamento	
	
	vf = pd * 5.35 + bis * 6.22 + pcq * 8.98;

	//saida
	
	printf("o valor a ser pago e de: %f", vf);
	
	return 0;
}
