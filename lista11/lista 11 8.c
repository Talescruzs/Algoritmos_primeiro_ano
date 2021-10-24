/*8. Programe um pequeno sistema que multiplique uma matriz de qualquer ordem por um
vetor.*/
#include<stdio.h>
#include<locale.h>
#include<time.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, i, j, linha, coluna, tam;
	printf("Digite quantas linhas terá a matriz: ");
	scanf("%d", &linha);
	printf("Digite quantas colunas terá a matriz: ");
	scanf("%d", &coluna);
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tam);
	
	int matriz[linha][coluna], vet[tam], resultado[linha][tam];
	
	if(coluna == 1){
		printf("Digite os valores da matriz:\n ");
		for(i=0; i<linha; i++){
			for(j=0; j<coluna; j++){
				printf("Linha %d coluna %d: ", i+1, j+1);
				scanf("%d", &matriz[i][j]);
			}
		}
		printf("Digite os valores do vetor:\n ");
		for(i=0; i<tam; i++){
				printf("Posição %d: ", i+1);
				scanf("%d", &vet[i]);
		}
		for(i=0; i<linha; i++){
			for(j=0; j<tam; j++){
				resultado[i][j]=matriz[i][0]*vet[j];
				printf("%d	", resultado[i][j]);
			}
			printf("\n");
		}
	}else{
		printf("Não é possível realizar multiplicação com essas matrizes.");
	}
	
	return 0;
}
