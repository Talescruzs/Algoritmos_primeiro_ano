/*3. Foi feita uma pesquisa entre os habitantes na região central do estado do Rio Grande
do Sul, para evidenciar o machismo estrutural que interfere no salário feminino no mercado
de trabalho. Foram coletados os dados de sexo (Masculino = 01 / Feminino = 02) e salário.
Faça um algoritmo que informe:
a) a média de salário do grupo;
c) quantidade de mulheres com salário até R$1.000,00.
Encerre a entrada de dados quando for digitada um salário negativo*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int m=0, f=0, i=0, n=0, fsal=0;
	float salmasc=0, salfem=0, saltm=0, saltf=0, salmmasc=0, salmfem=0;
	
	for(i==0; i<=1; i--){
		printf("Digite o sexo biológico\n1=Masculino\n2=Feminino\n");
		scanf("%d", &n);
		if(n==1){
			printf("Digite o salario: ");
			scanf("%f", &salmasc);
			if(salmasc<0 || salfem<0){
				break;
			}
			m++;
			saltm=salmasc+saltm;
		}else if(n==2){
			printf("Digite seu salario: ");
			scanf("%f", &salfem);
			if(salmasc<0 || salfem<0){
				break;
			}
			f++;
			if(salfem<1000){
				fsal++;
			}
			saltf=salfem+saltf;
		}else{
			printf("Não temos essa opção\n");
		}
	}
	salmmasc=saltm/m;
	salmfem=saltf/f;
	printf("A média do salario dos Homens é de %f\n", salmmasc);
	printf("A média do salario das mulheres é de %f\n", salmfem);
	printf("A quantidade de mulheres que ganham menos de 1000 reais é de %d\n", fsal);
	
	return 0;
}
