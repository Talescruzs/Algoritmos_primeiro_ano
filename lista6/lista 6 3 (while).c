/*3. Crie um programa que recebe 2 valores e calcule:
a. soma dos n�meros �mpares desse intervalo de valores, incluindo os digitados
b. a multiplica��o dos n�meros pares desse intervalo, incluindo os digitados*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, i, vfs=0, vfm=1;
	
	printf("Digite um valor qualquer: ");
	scanf("%d", &n1);
	printf("Digite outro valor qualquer: ");
	scanf("%d", &n2);
	
	if(n1>n2){
		i=n1;
		i==n1;
		while(i>=n2){
			if(i%2!=0){
				vfs=vfs+i;
			}
			if(i%2==0){
				vfm=vfm*i;
			}
			i--;
		}
		printf("A soma dos n�meros �mpares desse intervalo de valores � %d\n", vfs);
		printf("A multiplica��o dos n�meros pares desse intervalo � %d\n", vfm);
	}else if(n1<n2){
		i=n2;
		i==n2;
		while(i>=n1){
			if(i%2!=0){
				vfs=vfs+i;
			}
			if(i%2==0){
				vfm=vfm*i;
			}
			i--;
		}
		printf("A soma dos n�meros �mpares desse intervalo de valores � %d\n", vfs);
		printf("A multiplica��o dos n�meros pares desse intervalo � %d\n", vfm);
	}else{
		i=n2;
		i==n2;
		while(i>=n1){
			if(i%2!=0){
				vfs=vfs+i;
			}
			if(i%2==0){
				vfm=vfm*i;
			}
			i--;	
		}
		if(vfs!=0){
			printf("A soma dos n�meros �mpares desse intervalo de valores � %d\n", vfs);
		}else{
			printf("N�o foi possivel calcular a soma dos n�meros �mpares desse intervalo de valores\n");
		}
		if(vfm!=1){
			printf("A multiplica��o dos n�meros pares desse intervalo � %d\n", vfm);
		}else{
			printf("N�o foi possivel calcular a multiplica��o dos n�meros pares desse intervalo\n");
		}
	}
	
	return 0;
}
