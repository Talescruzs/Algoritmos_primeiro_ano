/*1. Faça um algoritmo que contenha um vetor de 200 posições, utilizando os laços de
repetição DO WHILE e WHILE que recebe valores aleatórios do sistema e ao final de todos
os números lidos devem apresentar a soma de todos esses valores.*/

#include<stdio.h>
#include<locale.h>
#include<time.h>

#define TAM 200
int main(){
	setlocale(LC_ALL, "Portuguese");
	int vet[TAM], i, soma;
	soma=0;
	
	printf("Os valores aleatórios sorteados foram:\n");
	srand(time(NULL));
	i=0;
	while(i<TAM){
		vet[i] = rand()%100;
		printf("vet[%d]: %d\n", i, vet[i]);
		soma=vet[i]+soma;
		i++;
	}
	printf("A soma dos valores sorteados é: %d", soma);
	
	return 0;
}

