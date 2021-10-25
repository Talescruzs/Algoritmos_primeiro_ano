/*5. Em um vetor de 500 posi��es sorteie todos os n�meros e ainda pe�a ao usu�rio um
n�mero de busca, substitua o n�mero de busca, caso ele seja encontrado no vetor por -1 e
ainda mostre o total de substitui��es feitas pelo algoritmo.*/

#include<stdio.h>
#include<locale.h>
#include<time.h>

#define tam 500
int main(){
	setlocale(LC_ALL, "Portuguese");
	int vet[tam], i, num, sub=0;
	
	printf("Os n�meros aleat�rios sorteados s�o:\n");
	srand(time(NULL));
	for(i=0; i<tam; i++){
		vet[i] = rand()%100;
		printf("vet[%d]: %d\n", i, vet[i]);
	}
	printf("Digite um n�mero de busca: ");
	scanf("%d", &num);
	for(i=0; i<tam; i++){
		if(num==vet[i]){
			vet[i]=-1;
			sub++;
		}
	}
	printf("\nOs novos valores s�o:\n");
	for(i=0; i<tam; i++){
		printf("vet[%d]: %d\n", i, vet[i]);
	}
	printf("\nO n�mero de substitui��es foi %d", sub);
	
	return 0;
}
