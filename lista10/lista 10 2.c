/*2. Fa�a um programa que utilize a seguinte regra para gerar as
posi��es de um vetor de 200 posi��es.
Ap�s gerar os n�meros mostre-os na tela identificando quais s�o
pares ou �mpares.*/

#include<stdio.h>
#include<locale.h>
#include<time.h>

#define tam 200
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, vet[tam];
	
	srand(time(NULL));
	vet[0] = rand()%100;
	
	printf("Os valores dos vetores s�o:\n");
	for(i=0; i<tam; i++){
		if(i%2==0){
			vet[i]=((i*8)/3)+105,9;
			if(vet[i]%2==0){
				printf("Vet[%d]:%d -- Par\n", i, vet[i]);
			}
			else{
				printf("Vet[%d]:%d -- Impar\n", i, vet[i]);
			}
		}
		else {
			vet[i]=i+(5/i)+(i*i);
			if(vet[i]%2==0){
				printf("Vet[%d]:%d -- Par\n", i, vet[i]);
			}
			else{
				printf("Vet[%d]:%d -- Impar\n", i, vet[i]);
			}
		}
	}
	
	return 0;
}
