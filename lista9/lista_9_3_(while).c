/*3. A partir de um vetor de tamanho 100, com n?meros aleat?rios, pe?a ao usu?rio para
digitar um n?mero de busca. Ao final deve ser mostrado quantas vezes o n?mero que foi
digitado ocorre no vetor. Utilize WHILE e FOR.*/

#include<stdio.h>
#include<locale.h>
#include<time.h>

#define TAM 100
int main(){
	setlocale(LC_ALL, "Portuguese");
	int vet[TAM], i, num, dig=0;
	
	srand(time(NULL));
	printf("Os valores do vetor s?o:\n");
	i=0;
	while(i<TAM){
		vet[i] = rand()%100;
		printf("vet[%d]: %d\n", i, vet[i]);
		i++;
	}
	printf("Digite um n?mero de busca:");
	scanf("%d", &num);
	i=0;
	while(i<TAM){
		if(num==vet[i]){
			dig++;
		}
		i++;
	}
	printf("Este n?mero foi digitado %d vezes", dig);
	
	return 0;
}
