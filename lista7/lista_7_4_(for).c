/*4. Escreva um programa que lê 1.000 valores, um de cada vez, e conta quantos deles
estão no intervalo [35, 50] e quantos deles estão fora do intervalo, escrevendo estas
informações no final da execução.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i=0, n=0, ni=0;
	
	for(i==0;i<=1000;i++){
		printf("Digite um valor aletótio: ");
		scanf("%d", &n);
		if(n>=35 && n<=50){
			ni++;
		}
	}
	printf("Foram digitados %d valores que estão no cunjunto [35, 50]", ni);
	
	return 0;
}
