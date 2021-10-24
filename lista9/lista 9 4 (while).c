/*4. Faça um programa que leia a nota da prova de 35 alunos do técnico de Informática e
Geladeira e armazene num vetor de mesmo tamanho, dessa forma calcule e mostre a média
geral. Utilize 2 laços de repetição.*/

#include<stdio.h>
#include<locale.h>
#include<time.h>

#define TAM 35
int main(){
	setlocale(LC_ALL, "Portuguese");
	int vet[TAM], i, nota=0, med;
	
	printf("Digite as notas de cada aluno:\n");
	i=0;
	while(i<TAM){
		printf("vet[%d]: ", i);
		scanf("%d", &vet[i]);
		nota=vet[i]+nota;
		i++;
	}
	med=nota/TAM;
	printf("A média das notas é: %d", med);
	
	return 0;
}
