/*6. Em um algoritmo leia um vetor de 30 posições e verifique se cada uma das posições é
negativa ou positiva e ainda par ou ímpar, ao final mostre as posições que se encaixam em
cada uma das classificações.*/

#include<stdio.h>
#include<locale.h>
#include<time.h>

#define tam 30
int main(){
	setlocale(LC_ALL, "Portuguese");
	int vet[tam], i;
	
	printf("Digite valores aleatórios\n");
	for(i=0; i<tam; i++){
		printf("vet[%d]: ", i);
		scanf("%d", &vet[i]);
	}
	//positivo
	printf("Os valores positivos digitados são:\n");
	for(i=0; i<tam; i++){
		if(vet[i]>0){
			printf("vet[%d]: %d\n", i, vet[i]);
		}
	}
	//negativo
	printf("Os valores negativos digitados são:\n");
	for(i=0; i<tam; i++){
		if(vet[i]<0){
			printf("vet[%d]: %d\n", i, vet[i]);
		}
	}
	//par
	printf("Os valores pares digitados são:\n");
	for(i=0; i<tam; i++){
		if(vet[i]%2==0){
			printf("vet[%d]: %d\n", i, vet[i]);
		}
	}
	//impar
	printf("Os valores ímpares digitados são:\n");
	for(i=0; i<tam; i++){
		if(vet[i]%2!=0){
			printf("vet[%d]: %d\n", i, vet[i]);
		}
	}
	
	return 0;
}
