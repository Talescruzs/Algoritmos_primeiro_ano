/*5. Crie um algoritmo que leia as tr�s notas de 35 alunos de uma turma. Para cada aluno,
calcule a m�dia ponderada, como segue:
M�dia do aluno = (n1*2 + n2*4 + n3*3) / 10
Ainda:
a. calcule a m�dia geral da turma;
b. mostre a m�dia de cada aluno e uma mensagem "Aprovado", caso a m�dia seja
maior ou igual a sete, e uma mensagem "Reprovado";
c. mostre a m�dia geral.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i=0, a=0;
	float mediaaluno=0, somat=0, mediat=0, n1, n2, n3;
	
	for(i==0; i<35; i++){
		printf("Digite a nota 1 do aluno");
		scanf("%f", &n1);
		printf("Digite a nota 1 do aluno");
		scanf("%f", &n2);
		printf("Digite a nota 1 do aluno");
		scanf("%f", &n3);
		mediaaluno=(n1*2+n2*4+n3*3)/10;
		printf("A m�dia do aluno foi de %f\n", mediaaluno);
		if(mediaaluno>=7){
			printf("Aluno aprovado\n");
		}else{
			printf("Aluno reprovado\n");
		}
		somat=somat+mediaaluno;
		a++;
	}
	mediat=somat/a;
	printf("A m�dia da nota da turma da turma foi de %f", mediat);
	
	return 0;
}
