/*4. Ana Maria Braga e Louro Jos�, dois �cones da TV brasileira,
precisam que voc� desenvolvia um programa que possua um
vetor de 100 posi��es, sendo inicializado com valores aleat�rios.
Tamb�m deve ter um segundo vetor em que apenas os valores
�mpares do primeiro devem ser colocados. Mostre aos os vetores
ao final.*/

#include<stdio.h>
#include<locale.h>
#include<time.h>

#define tam 100
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, vet1[tam], vet2[tam];
	
	printf("Os valores do primeiro vetor s�o:\n");
	srand(time(NULL));
	for(i=0; i<tam; i++){
		vet1[i] = rand()%100;
		printf("Vet1[%d]: %d\n", i, vet1[i]);
	}
	printf("Os valores do segundo vetor s�o:\n");
	for(i=0; i<tam; i++){
		if(vet1[i]%2!=0){
			vet2[i]=vet1[i];
			printf("Vet2[%d]: %d\n", i, vet2[i]);		
		}
	}
	
	return 0;
}
