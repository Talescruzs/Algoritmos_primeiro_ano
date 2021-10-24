/*3. Foi feita uma pesquisa entre os habitantes na regi�o central do estado do Rio Grande
do Sul, para evidenciar o machismo estrutural que interfere no sal�rio feminino no mercado
de trabalho. Foram coletados os dados de sexo (Masculino = 01 / Feminino = 02) e sal�rio.
Fa�a um algoritmo que informe:
a) a m�dia de sal�rio do grupo;
c) quantidade de mulheres com sal�rio at� R$1.000,00.
Encerre a entrada de dados quando for digitada um sal�rio negativo*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int m=0, f=0, i=0, n=0, fsal=0;
	float salmasc=0, salfem=0, saltm=0, saltf=0, salmmasc=0, salmfem=0;
	
	for(i==0; i<=1; i--){
		printf("Digite o sexo biol�gico\n1=Masculino\n2=Feminino\n");
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
			printf("N�o temos essa op��o\n");
		}
	}
	salmmasc=saltm/m;
	salmfem=saltf/f;
	printf("A m�dia do salario dos Homens � de %f\n", salmmasc);
	printf("A m�dia do salario das mulheres � de %f\n", salmfem);
	printf("A quantidade de mulheres que ganham menos de 1000 reais � de %d\n", fsal);
	
	return 0;
}
