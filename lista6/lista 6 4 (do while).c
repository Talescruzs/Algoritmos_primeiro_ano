/*4. Construa um algoritmo que l� 7 n�meros reais e mostra a soma de todos ao final.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n, vf, i=0;
	i==0;
	do{
		printf("Digite um n�mero real ");
		scanf("%f", &n);
		vf=n+vf;
		i++;	
	}while(i<7);
	
	printf("A soma desses n�meros � %f", vf);
	
	return 0;
}
