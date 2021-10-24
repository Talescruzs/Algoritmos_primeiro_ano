/*5. Ainda, Blond Josef precisa que você crie um algoritmo que NÃO
aceite números ímpares. Os valores devem ser colocados em um vetor
de 10 posições.
Nota: Quando um número ímpar for digitado o programa não deve
aceitar e só deve seguir a leitura dos números quando um número
par for digitado.*/

#include<stdio.h>
#include<locale.h>
#include<time.h>

#define tam 10
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, vet[tam];
	
	printf("Digite os valores pares do vetor:\n");
	for(i=0; i<tam; i++){
		printf("Vet[%d]: ", i);
		scanf("%d", &vet[i]);
		if(vet[i]%2!=0){
			printf("Este numero não foi aceito, digite novamente\n");
			i--;
		}
	}
	
	return 0;
}
