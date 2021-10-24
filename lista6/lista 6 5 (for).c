/*5. Faça um algoritmo que lê 100 números reais e a cada 5 números digitados mostra a
soma desses valores digitados*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, vf, i, a;
	
	for(i==0; i<=20; i++){
		for(a==0; a<5; a++){
		printf("Digite um número aleatório ");
		scanf("%d", &n);
		vf=vf+n;
		}
		a=0;
		printf("A soma dos ultimos 5 números é: %d\n", vf);
		vf=0;
	}
	
	
	return 0;
}
