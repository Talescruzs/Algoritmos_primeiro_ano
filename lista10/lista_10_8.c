/*8. Depois de realizar todas as outras questões, agora faça um programa que leia um vetor
de 100 posições de números reais e, depois, um código do tipo inteiro. Se o código for zero,
finalize o programa; se for 1, mostre o vetor na ordem comum; se for 2, mostre o vetor na
ordem inversa. Caso, o código for diferente de 1 e 2 escreva uma mensagem informando
que o código é inválido.*/

#include<stdio.h>
#include<locale.h>
#include<time.h>

#define tam 100
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, vet[tam], num;
	
	printf("Digite os valores do vetor:\n");
	for(i=0; i<tam; i++){
		printf("Vet[%d]: ", i);
		scanf("%d", &vet[i]);
	}
	for(i=1; i>=0; i++){
		printf("Digite o código:");
		scanf("%d", &num);
		if(num==0){
			printf("Cabô");
			break;
		}
		else if(num==1){
			printf("O vetor na ordem comum é:\n");
			for(i=0; i<tam; i++){
				printf("Vet[%d]: %d\n", i, vet[i]);
			}
			break;
		}
		else if(num==2){
			printf("O vetor na ordem inversa é:\n");
			for(i=tam-1; i>-1; i--){
				printf("Vet[%d]: %d\n", i, vet[i]);
			}
			break;
		}
		else{
			printf("Esse código é inválido, tente novamente\n");
		}
	}
	
	return 0;
}
