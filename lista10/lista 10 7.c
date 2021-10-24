/*7. A dona rainha suprema da internet chegou aqui nesse recinto e gritou
“GREEEDDYYYYYY” e logo depois ordenou que você criasse um programa que possua um
vetor de 50 elementos e sorteie um número aleatório. Com o número recém sorteado você
deve buscá-lo no vetor e mostrar quantas vezes esse número se repete no vetor.*/

#include<stdio.h>
#include<locale.h>
#include<time.h>

#define tam 50
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, vet[tam], nums, numv=0;
	
	printf("Os valores do vetor são:\n");
	srand(time(NULL));
	for(i=0; i<tam; i++){
		vet[i] = rand()%100;
		printf("Vet[%d]: %d\n", i, vet[i]);
	}
	nums=rand()%100;
	printf("O valor aleatório sorteado: %d\n", nums);
	for(i=0; i<tam; i++){
		if(vet[i]==nums){
			numv++;
		}
	}
	printf("Este valor aparece %d vezes no vetor\n", numv);
	
	return 0;
}
