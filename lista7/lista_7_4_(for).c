/*4. Escreva um programa que l� 1.000 valores, um de cada vez, e conta quantos deles
est�o no intervalo [35, 50] e quantos deles est�o fora do intervalo, escrevendo estas
informa��es no final da execu��o.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i=0, n=0, ni=0;
	
	for(i==0;i<=1000;i++){
		printf("Digite um valor alet�tio: ");
		scanf("%d", &n);
		if(n>=35 && n<=50){
			ni++;
		}
	}
	printf("Foram digitados %d valores que est�o no cunjunto [35, 50]", ni);
	
	return 0;
}
