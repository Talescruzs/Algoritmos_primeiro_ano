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
	for(i=0; i<TAM; i++){
		printf("vet1[%d]: ", i);
		scanf("%d", &vet1[i]);
	}
	printf("Digite valores para o segundo vetor:\n");
	for(i=0; i<TAM; i++){
		printf("vet1[%d]: ", i);
		scanf("%d", &vet2[i]);
	}
	printf("A ordem inversa do primeiro vetor é:\n");
	for(i=TAM-1; i>-1; i--){
		printf("vet1[%d]: %d\n", i, vet1[i]);
	}
	printf("A ordem inversa do segundo vetor é:\n");
	for(i=TAM-1; i>-1; i--){
		printf("vet1[%d]: %d\n", i, vet2[i]);
	}
	
	return 0;
}

