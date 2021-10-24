/*5. Faça um algoritmo que lê 100 números reais e a cada 5 números digitados mostra a
soma desses valores digitados*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, vf, i, a;
	i==0;
	do{
		a==0;
		do{
		printf("Digite um número aleatório ");
		scanf("%d", &n);
		vf=vf+n;
		a++;
		}while(a<5);
		a=0;
		printf("A soma dos ultimos 5 números é: %d\n", vf);
		vf=0;
		i++;
	}while(i<=20);
	
	
	return 0;
}
