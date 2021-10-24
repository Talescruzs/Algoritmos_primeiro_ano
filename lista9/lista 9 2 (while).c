/*2. Utilizando dois vetores de 50 posições leia todas as posições e depois mostre-os na
ordem inversa de leitura. Utilize FOR e WHILE.*/

#include<stdio.h>
#include<locale.h>
#include<time.h>

#define TAM 50
int main(){
	setlocale(LC_ALL, "Portuguese");
	int vet1[TAM], vet2[TAM], i;
	
	printf("Digite valores para o primeiro vetor:\n");
	i=0;
	while(i<TAM){
		printf("vet1[%d]: ", i);
		scanf("%d", &vet1[i]);
		i++;
	}
	printf("Digite valores para o segundo vetor:\n");
	i=0;
	while(i<TAM){
		printf("vet1[%d]: ", i);
		scanf("%d", &vet2[i]);
		i++;
	}
	printf("A ordem inversa do primeiro vetor é:\n");
	i=TAM-1;
	while(i>-1){
		printf("vet1[%d]: %d\n", i, vet1[i]);
		i--;
	}
	printf("A ordem inversa do segundo vetor é:\n");
	i=TAM-1;
	while(i>-1){
		printf("vet1[%d]: %d\n", i, vet2[i]);
		i--;
	}
	
	return 0;
}

