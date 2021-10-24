/*4. Construa um algoritmo que lê 7 números reais e mostra a soma de todos ao final.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n, vf=0, i=0;
	
	for(i==0; i<7; i++){
		printf("Digite um número real ");
		scanf("%f", &n);
		vf=n+vf;
	}
	printf("A soma desses números é %f", vf);
	
	return 0;
}
