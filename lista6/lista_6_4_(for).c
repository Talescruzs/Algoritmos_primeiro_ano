/*4. Construa um algoritmo que l� 7 n�meros reais e mostra a soma de todos ao final.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n, vf=0, i=0;
	
	for(i==0; i<7; i++){
		printf("Digite um n�mero real ");
		scanf("%f", &n);
		vf=n+vf;
	}
	printf("A soma desses n�meros � %f", vf);
	
	return 0;
}
