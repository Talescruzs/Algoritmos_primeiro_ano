/*6. Em um algoritmo leia um vetor de 30 posi��es e verifique se cada uma das posi��es �
negativa ou positiva e ainda par ou �mpar, ao final mostre as posi��es que se encaixam em
cada uma das classifica��es.*/

#include<stdio.h>
#include<locale.h>
#include<time.h>

#define tam 30
int main(){
	setlocale(LC_ALL, "Portuguese");
	int vet[tam], i;
	
	printf("Digite valores aleat�rios\n");
	for(i=0; i<tam; i++){
		printf("vet[%d]: ", i);
		scanf("%d", &vet[i]);
	}
	//positivo
	printf("Os valores positivos digitados s�o:\n");
	for(i=0; i<tam; i++){
		if(vet[i]>0){
			printf("vet[%d]: %d\n", i, vet[i]);
		}
	}
	//negativo
	printf("Os valores negativos digitados s�o:\n");
	for(i=0; i<tam; i++){
		if(vet[i]<0){
			printf("vet[%d]: %d\n", i, vet[i]);
		}
	}
	//par
	printf("Os valores pares digitados s�o:\n");
	for(i=0; i<tam; i++){
		if(vet[i]%2==0){
			printf("vet[%d]: %d\n", i, vet[i]);
		}
	}
	//impar
	printf("Os valores �mpares digitados s�o:\n");
	for(i=0; i<tam; i++){
		if(vet[i]%2!=0){
			printf("vet[%d]: %d\n", i, vet[i]);
		}
	}
	
	return 0;
}
