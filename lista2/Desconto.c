/*5. O dono de v�rias salas comerciais resolveu dar um desconto de 43,55% no aluguel para as empresas locat�rias em virtude do Coronav�rus. 
*Pe�a ao usu�rio para que informe o valor integral do aluguel e mostre o desconto a ser dado e o valor total que deve ser pago, diminu�do do desconto.*/

#include<stdio.h>

int main(){
	float aluguel_normal, desconto, aluguel_com_desconto;
	
	//entrada
	printf(" informe o valor integral do alugue: ");
	scanf("%f", &aluguel_normal);
	
	//processamento
	desconto = aluguel_normal /100 * 43.55;
	aluguel_com_desconto = aluguel_normal - desconto;
	
	//saida
	printf("\nseu desconto sera de:%f reais", desconto);
	printf("\nvoce devera pagar:%f reais", aluguel_com_desconto);
	
	return 0;
}
