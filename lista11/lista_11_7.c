/*7. Crie um algoritmo que realize a multiplicação entre duas matrizes, a primeira de ordem
5x3 e a segunda de ordem 3x2. Mostre o resultado ao final.*/
#include<stdio.h>
#include<locale.h>
#include<time.h>

#define linha1 5
#define coluna1 3
#define linha2 3
#define coluna2 2
int main(){
	setlocale(LC_ALL, "Portuguese");
	int matriz1[linha1][coluna1], matriz2[linha2][coluna2], resultado[linha1][coluna2], i, j, a, aux=0;
	printf("Digite valores para a primeira matriz:\n");
	for(i=0; i<linha1; i++){
		for(j=0; j<coluna1; j++){
			printf("Posição %d, %d: ", i+1, j+1);
			scanf("%d", &matriz1[i][j]);
		}
	}
	printf("Digite valores para a segunda matriz:\n");
	for(i=0; i<linha2; i++){
		for(j=0; j<coluna2; j++){
			printf("Posição %d, %d: ", i+1, j+1);
			scanf("%d", &matriz2[i][j]);
		}
	}
	printf("A matriz resultante da multiplicação é:\n");
	for(i=0; i<linha1; i++){
		for(j=0; j<coluna2; j++){
			for(a=0; a<linha2; a++){
				aux += matriz1[i][a] * matriz2[a][j];
			}
			resultado[i][j] = aux;
			aux=0;
			printf("%d	", resultado[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
