/*3. Calcule o valor da gorjeta de um restaurante muito caro de Santa Maria, sabendo que ela é de 25% a mais sobre o valor consumido pelo cliente.*/

#include<stdio.h>
int main(){
	float reais, gorjeta;
	
	//entrada
	printf("digite o valor consumido: ");
	scanf("%f", &reais);
	
	//processamento
	gorjeta = (reais * 25) / 100;
	
	//saida
	printf("\na gorjeta sera:%f reais\n", gorjeta);
	return 0;
}
