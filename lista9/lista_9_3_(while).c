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
	i=0;
	while(i<TAM){
		vet[i] = rand()%100;
		printf("vet[%d]: %d\n", i, vet[i]);
		i++;
	}
	printf("Digite um número de busca:");
	scanf("%d", &num);
	i=0;
	while(i<TAM){
		if(num==vet[i]){
			dig++;
		}
		i++;
	}
	printf("Este número foi digitado %d vezes", dig);
	
	return 0;
}
