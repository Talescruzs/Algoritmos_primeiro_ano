/*1. Oi sumida(o) rsrsrs. Desejo que você crie uma matriz de ordem 3x3 e popule a mesma
com dados inseridos pelo usuário. Posteriormente multiplique a toda a matriz por um número
aleatório que deve ser gerado pelo programa.*/
#include<stdio.h>
#include<locale.h>
#include<time.h>

#define tam 3
int main(){
	setlocale(LC_ALL, "Portuguese");
	int matriz[tam][tam], n, resultado[tam][tam], i, j;
	
	printf("Digite os valores da matriz:\n");
	for(i=1; i<tam+1; i++){
		for(j=1; j<tam+1; j++){
			printf("Posição %d,%d: ", i, j);
			scanf("%d", &matriz[i-1][j-1]);
		}
	}
	srand(time(NULL));
	n=rand()%100;
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			resultado[i][j] = n * matriz[i][j];
		}
	}
	printf("O numero sorteado para multiplicar a matriz foi %d\n", n);
	printf("A matriz resultante foi:\n");
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("%d	", resultado[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
