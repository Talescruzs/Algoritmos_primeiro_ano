/*9. Crie um algoritmo que possua dois vetores, cada um
representando um conjunto num�rico (A e B), leia ambos que
possuem tamanho 10. A partir dos n�meros lidos fa�a a
intersec��o dos conjuntos, mostrando quais n�meros est�o
presentes somente entre A e B.*/

#include<stdio.h>
#include<locale.h>
#include<time.h>

#define tam 10
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, vet1[tam], vet2[tam], vet3[tam], a, d=0;
	
	printf("Digite os valores do primeiro vetor:\n");
	for(i=0; i<tam; i++){
		printf("Vet[%d]: ", i);
		scanf("%d", &vet1[i]);
	}
	
	printf("Digite os valores do segundo vetor:\n");
	for(i=0; i<tam; i++){
		printf("Vet[%d]: ", i);
		scanf("%d", &vet2[i]);
	}
	for(i=0; i<tam; i++){
		for(a=0; a<tam; a++){
			if(vet1[i]==vet2[a]){
				vet3[d]=vet1[i];
				d++;
				break;
			}
		}
	}
	printf("A intersec��o dos dois vetores �:\n");
	for(i=0; i<d; i++){
		printf("Vet[%d]: %d\n", i, vet3[i]);
	}
	//S� pra deixar claro, esse foi bem dif�cil mas eu t� dando pulinhos pq eu consegui sem pesquisar IIIIIIHHHAAAAAAA
	return 0;
}
