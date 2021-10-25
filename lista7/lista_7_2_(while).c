/*2. Faça um algoritmo que espere 10 números reais e verifique se cada um deles é
negativo, caso verdadeiro o número deve excluído da soma. Ao final mostrar a média,
apenas entre os valores positivos.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n, i=0, vf=0, md, np=0;
	
	i==0;
	while(i<10){
		printf("Digite um número real: ");
		scanf("%f", &n);
		if(n>0){
			vf=vf+n;
			np++;
		}
		i++;
	}
	md=vf/np;
	printf("A média dos valores positivos é %f", md);
	return 0;
}
