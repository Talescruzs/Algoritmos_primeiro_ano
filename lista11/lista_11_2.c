/*2. Buonasera Katuxa? Natasha deseja que você faça a soma de duas
matrizes de ordem 5x3 e ainda mostre o resultado na tela. As duas matrizes
de entrada devem ser sorteadas.*/
#include<stdio.h>
#include<locale.h>
#include<time.h>

#define tami 5
#define tamj 3
int main(){
	setlocale(LC_ALL, "Portuguese");
	int matrizum[tami][tamj], matrizdois[tami][tamj], resultado[tami][tamj], i, j;
	
	printf("A matriz um sorteada foi:\n");
	srand(time(NULL));
	for(i=0; i<tami; i++){
		for(j=0; j<tamj; j++){
			matrizum[i][j]=rand()%100;
			printf("%d	", matrizum[i][j]);
		}
		printf("\n");
	}
	printf("A matriz dois sorteada foi:\n");
	for(i=0; i<tami; i++){
		for(j=0; j<tamj; j++){
			matrizdois[i][j]=rand()%100;
			printf("%d	", matrizdois[i][j]);
		}
		printf("\n");
	}
	printf("A soma dessas duas matrizes é: \n");
	for(i=0; i<tami; i++){
		for(j=0; j<tamj; j++){
			resultado[i][j]=matrizum[i][j]+matrizdois[i][j];
			printf("%d	", resultado[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
