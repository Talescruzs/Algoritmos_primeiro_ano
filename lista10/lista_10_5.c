/*5. Ainda, Blond Josef precisa que voc� crie um algoritmo que N�O
aceite n�meros �mpares. Os valores devem ser colocados em um vetor
de 10 posi��es.
Nota: Quando um n�mero �mpar for digitado o programa n�o deve
aceitar e s� deve seguir a leitura dos n�meros quando um n�mero
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
			printf("Este numero n�o foi aceito, digite novamente\n");
			i--;
		}
	}
	
	return 0;
}
