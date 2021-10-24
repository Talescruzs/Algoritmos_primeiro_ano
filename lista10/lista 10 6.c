/*6. Imaginando que você está no programa “Sterblitch Não Tem Um Talk Show: o Talk
Show” e Eduardo lhe pergunta como você faria um programa na linguagem C que encontra
os valores que possuem o maior e o menor valor armazenados em um vetor de 20 posições.
Desenvolva esse algoritmo para que Eduardo Sterblitch continue gerando memes para a
internet toda usufruir.*/

#include<stdio.h>
#include<locale.h>
#include<time.h>

#define tam 20
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, vet[tam], maior, menor;
	
	printf("Os valores do vetor são:\n");
	srand(time(NULL));
	for(i=0; i<tam; i++){
		vet[i] = rand()%100;
		printf("Vet[%d]: %d\n", i, vet[i]);
	}
	maior=vet[0];
	menor=vet[0];
	for(i=0; i<tam; i++){
		if(maior<vet[i]){
			maior=vet[i];
		}
		if(menor>vet[i]){
			menor=vet[i];
		}
	}
	printf("O maior valor deste vetor é %d\n", maior);
	printf("O menor valor deste vetor é %d\n", menor);
	
	return 0;
}
