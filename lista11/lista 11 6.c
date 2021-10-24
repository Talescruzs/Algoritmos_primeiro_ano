/*6. Depois de ter confirmado mais de 300 pessoas para o BBB 21, Leo Noites precisa que
você desenvolva um programa que leia duas matrizes 3x3 com valores inteiros e informados
pelo usuário, ambas devem ser exibidas logo no início da execução. Peça ao usuário um
menu de opções e realize as operações:
1. soma as duas matrizes;
2. subtrai a primeira matriz da segunda;
3. multiplica as duas matrizes;
4. mostra as matrizes.*/
#include<stdio.h>
#include<locale.h>
#include<time.h>

#define tam 3
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, j, a, matrizum[tam][tam], matrizdois[tam][tam], resultado[tam][tam], aux=0;
	
	printf("Digite valores para a primeira matriz:\n");
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("Posição %d, %d: ", i+1, j+1);
			scanf("%d", &matrizum[i][j]);
		}
	}
	printf("Digite valores para a segunda matriz:\n");
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("Posição %d, %d: ", i+1, j+1);
			scanf("%d", &matrizdois[i][j]);
		}
	}
	system("cls");
	printf("Somar as matrizes=1\nSubtrair a primeira da segunda=2\nMultiplicar as duas matrizes=3\nMostrar as matrizes=4\n");
	printf("Digite o numero da operação desejada: ");
	scanf("%d", &a);
	system("cls");
	if(a==1){
		printf("A matriz resultante da soma é:\n");
		for(i=0; i<tam; i++){
			for(j=0; j<tam; j++){
				resultado[i][j]=matrizum[i][j]+matrizdois[i][j];
				printf("%d	", resultado[i][j]);
			}
			printf("\n");
		}
	}
	else if(a==2){
		printf("A matriz resultante da subtração é:\n");
		for(i=0; i<tam; i++){
			for(j=0; j<tam; j++){
				resultado[i][j]=matrizum[i][j]-matrizdois[i][j];
				printf("%d	", resultado[i][j]);
			}
			printf("\n");
		}
	}
	else if(a==3){
		printf("A matriz resultante da multiplicação é:\n");
		for(i=0; i<tam; i++){
			for(j=0; j<tam; j++){
				for(a=0; a<tam; a++){
					aux += matrizum[i][a] * matrizdois[a][j];
				}
				resultado[i][j] = aux;
				aux=0;
				printf("%d	", resultado[i][j]);
			}
			printf("\n");
		}
	}
	else if(a==4){
		printf("A matriz um é:\n");
		for(i=0; i<tam; i++){
			for(j=0; j<tam; j++){
				printf("%d	", matrizum[i][j]);
			}
			printf("\n");
		}
		printf("A matriz dois é:\n");
		for(i=0; i<tam; i++){
			for(j=0; j<tam; j++){
				printf("%d	", matrizdois[i][j]);
			}
			printf("\n");
		}
	}
	else{
		printf("O numero digitado não é uma opção");
	}	
	return 0;
}
