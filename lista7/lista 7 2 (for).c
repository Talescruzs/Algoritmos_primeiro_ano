/*2. Fa�a um algoritmo que espere 10 n�meros reais e verifique se cada um deles �
negativo, caso verdadeiro o n�mero deve exclu�do da soma. Ao final mostrar a m�dia,
apenas entre os valores positivos.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n, i=0, vf=0, md, np=0;
	
	for(i==0; i<10; i++){
		printf("Digite um n�mero real: ");
		scanf("%f", &n);
		if(n>0){
			vf=vf+n;
			np++;
		}
	}
	md=vf/np;
	printf("A m�dia dos valores positivos � %f", md);
	return 0;
}
