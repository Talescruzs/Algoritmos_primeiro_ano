/*3. A partir de um vetor de tamanho 100, com números aleatórios, peça ao usuário para
digitar um número de busca. Ao final deve ser mostrado quantas vezes o número que foi
digitado ocorre no vetor. Utilize WHILE e FOR.*/

#include<stdio.h>
#include<locale.h>
#include<time.h>

#define TAM 100
int main(){
	setlocale(LC_ALL, "Portuguese");
	int vet[TAM], i, num, dig=0;
	
	srand(time(NULL));
	printf("Os valores do vetor são:\n");
	for(i=0; i<TAM; i++){
		vet[i] = rand()%100;
		printf("vet[%d]: %d\n", i, vet[i]);
	}
	printf("Digite um número de busca:");
	scanf("%d", &num);
	for(i=0; i<TAM; i++){
		if(num==vet[i]){
			dig++;
		}
	}
	printf("Este número foi digitado %d vezes", dig);
	
	return 0;
}
