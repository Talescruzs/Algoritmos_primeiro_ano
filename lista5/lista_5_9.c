//9. Bon Jovi em sua vida de ora��es costuma ir pelo menos 2 vezes por semana � missa, dessa forma ora bastante. Fa�a um programa que recebe os dados em minutos das 8 ora��es feitas no m�s de abril, fa�a uma m�dia e mostre se cada uma das ora��es ficou baixo, na m�dia ou acima.


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float o1, o2, o3, o4, o5, o6, o7, o8, m;
	
	//entrada
	printf("Digite o tempo em minutos da primeira ora��o: ");
	scanf("%f", &o1);
	
	printf("Digite o tempo em minutos da segunda ora��o: ");
	scanf("%f", &o2);
	
	printf("Digite o tempo em minutos da terceira ora��o: ");
	scanf("%f", &o3);
	
	printf("Digite o tempo em minutos da quarta ora��o: ");
	scanf("%f", &o4);
	
	printf("Digite o tempo em minutos da quinta ora��o: ");
	scanf("%f", &o5);
	
	printf("Digite o tempo em minutos da sexta ora��o: ");
	scanf("%f", &o6);
	
	printf("Digite o tempo em minutos da s�tima ora��o: ");
	scanf("%f", &o7);
	
	printf("Digite o tempo em minutos da oitava ora��o: ");
	scanf("%f", &o8);
	//processamento
	m = (o1+o2+o3+o4+o5+o6+o7+o8)/8;
	
	//sa�da
	printf("A m�dia de tempo das ora��es foi de %f minutos\n", m);
	
	if(o1 > m){
		printf("A primeira ora��o ficou acima da m�dia de tempo\n");
	}else if(o1 < m){
		printf("A primeira ora��o ficou abaixo da m�dia de tempo\n");
	}else {
		printf("A primeira ora��o ficou na m�dia de tempo\n");
	}
	if(o2 > m){
		printf("A segunda ora��o ficou acima da m�dia de tempo\n");
	}else if(o2 < m){
		printf("A segunda ora��o ficou abaixo da m�dia de tempo\n");
	}else {
		printf("A segunda ora��o ficou na m�dia de tempo\n");
	}
	if(o3 > m){
		printf("A terceira ora��o ficou acima da m�dia de tempo\n");
	}else if(o3 < m){
		printf("A terceira ora��o ficou abaixo da m�dia de tempo\n");
	}else {
		printf("A terceira ora��o ficou na m�dia de tempo\n");
	}
	if(o4 > m){
		printf("A quarta ora��o ficou acima da m�dia de tempo\n");
	}else if(o4 < m){
		printf("A quarta ora��o ficou abaixo da m�dia de tempo\n");
	}else {
		printf("A quarta ora��o ficou na m�dia de tempo\n");
	}
	if(o5 > m){
		printf("A quinta ora��o ficou acima da m�dia de tempo\n");
	}else if(o5 < m){
		printf("A quinta ora��o ficou abaixo da m�dia de tempo\n");
	}else {
		printf("A quinta ora��o ficou na m�dia de tempo\n");
	}
	if(o6 > m){
		printf("A sexta ora��o ficou acima da m�dia de tempo\n");
	}else if(o6 < m){
		printf("A sexta ora��o ficou abaixo da m�dia de tempo\n");
	}else {
		printf("A sexta ora��o ficou na m�dia de tempo\n");
	}
	if(o7 > m){
		printf("A setima ora��o ficou acima da m�dia de tempo\n");
	}else if(o7 < m){
		printf("A setima ora��o ficou abaixo da m�dia de tempo\n");
	}else {
		printf("A setima ora��o ficou na m�dia de tempo\n");
	}
	if(o8 > m){
		printf("A oitava ora��o ficou acima da m�dia de tempo\n");
	}else if(o8 < m){
		printf("A oitava ora��o ficou abaixo da m�dia de tempo\n");
	}else {
		printf("A oitava ora��o ficou na m�dia de tempo\n");
	}
	
	
	return 0;
}
