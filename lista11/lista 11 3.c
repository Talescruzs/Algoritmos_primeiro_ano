/*3. Os cientistas do Instituto Butantan precisam para o
desenvolvimento de uma vacina realizar uma busca em uma
matriz de 10 linhas e 10 colunas em que nela continham n�meros
aleat�rios. Deseja-se encontrar a quantidade de n�meros pares
e n�meros �mpares e mostrar na tela ambas as quantidades.*/
#include<stdio.h>
#include<locale.h>
#include<time.h>

#define tam 10
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, j, matriz[tam][tam], par, impar;
	
	printf("A matriz um sorteada foi:\n");
	srand(time(NULL));
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			matriz[i][j]=rand()%100;
			printf("%d	", matriz[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			if(matriz[i][j]%2==0){
				par++;
			}
			else{
				impar++;
			}
		}
	}
	printf("A quantidade de numeros pares �: %d\n", par);
	printf("A quantidade de numeros impares �: %d\n", impar);
	
	return 0;
}
