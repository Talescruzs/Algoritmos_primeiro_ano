/*4. Para os testes dessa mesma vacina � de extrema
import�ncia ler uma matriz 6 x 6. Receba via teclado tamb�m um
n�mero qualquer. O programa dever� fazer uma busca desse
valor na matriz e, ao final, mostra a linha e coluna do n�mero ou
uma mensagem de �N�mero n�o encontrado.�.*/
#include<stdio.h>
#include<locale.h>
#include<time.h>

#define tam 6
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, j, matriz[tam][tam], num, flag=0;
	
	printf("Digite os valores da matriz:\n");
	for(i=1; i<tam+1; i++){
		for(j=1; j<tam+1; j++){
			printf("Posi��o %d,%d: ", i, j);
			scanf("%d", &matriz[i-1][j-1]);
		}
	}
	system("cls");
	printf("A matriz digitada foi foi:\n");
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("%d	", matriz[i][j]);
		}
		printf("\n");
	}
	printf("Digite um numero para ser encontrado na matriz:");
	scanf("%d", &num);
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			if(num == matriz[i][j]){
				printf("O numero digitado foi encontrado na linha %d, coluna %d\n", i+1, j+1);
				flag=1;
			}
		}
	}
	if(flag==0){
		printf("O numero n�o foi encontrado");
	}
			
	return 0;
}
