/*8. Depois de realizar todas as outras quest�es, agora fa�a um programa que leia um vetor
de 100 posi��es de n�meros reais e, depois, um c�digo do tipo inteiro. Se o c�digo for zero,
finalize o programa; se for 1, mostre o vetor na ordem comum; se for 2, mostre o vetor na
ordem inversa. Caso, o c�digo for diferente de 1 e 2 escreva uma mensagem informando
que o c�digo � inv�lido.*/

#include<stdio.h>
#include<locale.h>
#include<time.h>

#define tam 100
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, vet[tam], num;
	
	printf("Digite os valores do vetor:\n");
	for(i=0; i<tam; i++){
		printf("Vet[%d]: ", i);
		scanf("%d", &vet[i]);
	}
	for(i=1; i>=0; i++){
		printf("Digite o c�digo:");
		scanf("%d", &num);
		if(num==0){
			printf("Cab�");
			break;
		}
		else if(num==1){
			printf("O vetor na ordem comum �:\n");
			for(i=0; i<tam; i++){
				printf("Vet[%d]: %d\n", i, vet[i]);
			}
			break;
		}
		else if(num==2){
			printf("O vetor na ordem inversa �:\n");
			for(i=tam-1; i>-1; i--){
				printf("Vet[%d]: %d\n", i, vet[i]);
			}
			break;
		}
		else{
			printf("Esse c�digo � inv�lido, tente novamente\n");
		}
	}
	
	return 0;
}
