/*4. Calcule o IMC (Índice de Massa Corporal) do usuário, seguindo a fórmula. 
*O usuário deve entrar com o valor da sua massa corporal e sua altura.*/
 
#include<stdio.h>
int main(){
	float massa, altura, IMC;
	
	//entrada
	printf("digite sua massa: ");
	scanf("%f", &massa);
	
	printf("\ndigite sua altura: ");
	scanf("%f", &altura);
	
	//processamento 
	IMC = massa / (altura * altura);
	
	//saida
	printf("\nseu IMC equivale a:%f\n", IMC);
	return 0;
}
