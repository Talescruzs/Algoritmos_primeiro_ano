/*4. Construa um algoritmo que lê 7 números reais e mostra a soma de todos ao final.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n, vf, i=0;
	i==0;
	do{
		printf("Digite um número real ");
		scanf("%f", &n);
		vf=n+vf;
		i++;	
	}while(i<7);
	
	printf("A soma desses números é %f", vf);
	
	return 0;
}
