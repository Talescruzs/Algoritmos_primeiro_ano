/*1. Roi, aluno(a) de Algoritmos e Programação né? Eu, Izmaario preciso que você encontre
o produto escalar de dois vetores de tamanho 20, tá? Não sabe como fazer? Eu te ensino.*/

#include<stdio.h>
#include<locale.h>
#include<time.h>

#define tam 20
int main(){
	setlocale(LC_ALL, "Portuguese");
	int vet1[tam], vet2[tam], i, escal=0;
	
	printf("Digite os valores dos vetores\n");
	for(i=0; i<tam; i++){
		printf("Vet1[%d]: ", i);
		scanf("%d", &vet1[i]);
	}
	for(i=0; i<tam; i++){
		printf("Vet2[%d]: ", i);
		scanf("%d", &vet2[i]);
	}
	for(i=0; i<tam; i++){
		escal=escal+(vet1[i]*vet2[i]);
	}
	printf("O produto escalar dos vetores é %d", escal);
	
	return 0;
}
