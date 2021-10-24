/*5. Em um vetor de 500 posições sorteie todos os números e ainda peça ao usuário um
número de busca, substitua o número de busca, caso ele seja encontrado no vetor por -1 e
ainda mostre o total de substituições feitas pelo algoritmo.*/

#include<stdio.h>
#include<locale.h>
#include<time.h>

#define tam 500
int main(){
	setlocale(LC_ALL, "Portuguese");
	int vet[tam], i, num, sub=0;
	
	printf("Os números aleatórios sorteados são:\n");
	srand(time(NULL));
	for(i=0; i<tam; i++){
		vet[i] = rand()%100;
		printf("vet[%d]: %d\n", i, vet[i]);
	}
	printf("Digite um número de busca: ");
	scanf("%d", &num);
	for(i=0; i<tam; i++){
		if(num==vet[i]){
			vet[i]=-1;
			sub++;
		}
	}
	printf("\nOs novos valores são:\n");
	for(i=0; i<tam; i++){
		printf("vet[%d]: %d\n", i, vet[i]);
	}
	printf("\nO número de substituições foi %d", sub);
	
	return 0;
}
