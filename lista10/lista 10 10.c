/*10.Fa�a um programa que possua um vetor de tamanho 50 e seus elementos sejam
sorteados aleatoriamente e mostre o vetor gerado ao final.
Regras para o sorteio:
� N�o pode ser m�ltiplo de 7;
� N�o pode ser 0;
� N�o pode ser 25, 26 ou 27.
Fa�a isso ou a mo�a que destruiu a obra de arte do Romero Britto ir� na sua casa e
destruir� seu computador e celular.*/

#include<stdio.h>
#include<locale.h>
#include<time.h>

#define tam 50
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, vet[tam];
	
	printf("O vetor gerado aleat�riamente �:\n");
	srand(time(NULL));
	for(i=0; i<tam; i++){
		vet[i] = rand()%100;
		if(vet[i]%7==0){
			i--;
		}
		else if(vet[i]==0){
			i--;
		}
		else if(vet[i]>=25){
			if(vet[i]<=27){
				i--;
			}
		}
	}
	for(i=0; i<tam; i++){
		printf("Vet[%d]: %d\n", i, vet[i]);
	}
	
	return 0;
}
