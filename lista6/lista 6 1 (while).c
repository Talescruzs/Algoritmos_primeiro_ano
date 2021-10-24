/*1. Uma cidade chamada LazyTown possui 2 mil habitantes e está no 2º turno de suas
eleições para prefeito, possuindo então apenas 2 candidatos na disputa. Dessa forma, você
deve ler dois números (que sejam da sua preferência) e ao final da leitura mostrar:
a. A quantidade de votos dos dois candidatos;
b. A porcentagem de cada um dos candidatos;
c. Quem ganhou a eleição.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int canda=0, candb=0, i=0, voto, porcenta, porcentb;
	
	i==0;
	while(i<2000){
		printf("\nPara votar no candidato a, digite 1, para votar no candidato b, digite 2: ");
		scanf("%d", &voto);
		if(voto==1){
			canda++;
		}else if(voto==2){
			candb++;
		}
		i++;
	}	
	printf("\nO candidato a ganhou %d votos", canda);
	printf("\nO candidato b ganhou %d votos", candb);
	
	porcenta = (100*canda)/2000;
	porcentb = (100*candb)/2000;
	printf("\nA porcentagem de votos do candidato a é de %d porcento", porcenta);
	printf("\nA porcentagem de votos do candidato b é de %d porcento", porcentb);
	
	if(canda>candb){
		printf("\nO candidato a foi o vencedor");
	}else if(canda<candb){
		printf("\nO candidato b foi o vencedor");
	}else {
		printf("\nOcorreu um empate");
	}
	
	return 0;
}
