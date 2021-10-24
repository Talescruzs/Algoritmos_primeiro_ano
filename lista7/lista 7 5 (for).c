/*5. Crie um algoritmo que leia as três notas de 35 alunos de uma turma. Para cada aluno,
calcule a média ponderada, como segue:
Média do aluno = (n1*2 + n2*4 + n3*3) / 10
Ainda:
a. calcule a média geral da turma;
b. mostre a média de cada aluno e uma mensagem "Aprovado", caso a média seja
maior ou igual a sete, e uma mensagem "Reprovado";
c. mostre a média geral.*/

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
		printf("A média do aluno foi de %f\n", mediaaluno);
		if(mediaaluno>=7){
			printf("Aluno aprovado\n");
		}else{
			printf("Aluno reprovado\n");
		}
		somat=somat+mediaaluno;
		a++;
	}
	mediat=somat/a;
	printf("A média da nota da turma da turma foi de %f", mediat);
	
	return 0;
}
