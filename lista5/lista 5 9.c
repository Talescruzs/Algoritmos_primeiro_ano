//9. Bon Jovi em sua vida de orações costuma ir pelo menos 2 vezes por semana à missa, dessa forma ora bastante. Faça um programa que recebe os dados em minutos das 8 orações feitas no mês de abril, faça uma média e mostre se cada uma das orações ficou baixo, na média ou acima.


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float o1, o2, o3, o4, o5, o6, o7, o8, m;
	
	//entrada
	printf("Digite o tempo em minutos da primeira oração: ");
	scanf("%f", &o1);
	
	printf("Digite o tempo em minutos da segunda oração: ");
	scanf("%f", &o2);
	
	printf("Digite o tempo em minutos da terceira oração: ");
	scanf("%f", &o3);
	
	printf("Digite o tempo em minutos da quarta oração: ");
	scanf("%f", &o4);
	
	printf("Digite o tempo em minutos da quinta oração: ");
	scanf("%f", &o5);
	
	printf("Digite o tempo em minutos da sexta oração: ");
	scanf("%f", &o6);
	
	printf("Digite o tempo em minutos da sétima oração: ");
	scanf("%f", &o7);
	
	printf("Digite o tempo em minutos da oitava oração: ");
	scanf("%f", &o8);
	//processamento
	m = (o1+o2+o3+o4+o5+o6+o7+o8)/8;
	
	//saída
	printf("A média de tempo das orações foi de %f minutos\n", m);
	
	if(o1 > m){
		printf("A primeira oração ficou acima da média de tempo\n");
	}else if(o1 < m){
		printf("A primeira oração ficou abaixo da média de tempo\n");
	}else {
		printf("A primeira oração ficou na média de tempo\n");
	}
	if(o2 > m){
		printf("A segunda oração ficou acima da média de tempo\n");
	}else if(o2 < m){
		printf("A segunda oração ficou abaixo da média de tempo\n");
	}else {
		printf("A segunda oração ficou na média de tempo\n");
	}
	if(o3 > m){
		printf("A terceira oração ficou acima da média de tempo\n");
	}else if(o3 < m){
		printf("A terceira oração ficou abaixo da média de tempo\n");
	}else {
		printf("A terceira oração ficou na média de tempo\n");
	}
	if(o4 > m){
		printf("A quarta oração ficou acima da média de tempo\n");
	}else if(o4 < m){
		printf("A quarta oração ficou abaixo da média de tempo\n");
	}else {
		printf("A quarta oração ficou na média de tempo\n");
	}
	if(o5 > m){
		printf("A quinta oração ficou acima da média de tempo\n");
	}else if(o5 < m){
		printf("A quinta oração ficou abaixo da média de tempo\n");
	}else {
		printf("A quinta oração ficou na média de tempo\n");
	}
	if(o6 > m){
		printf("A sexta oração ficou acima da média de tempo\n");
	}else if(o6 < m){
		printf("A sexta oração ficou abaixo da média de tempo\n");
	}else {
		printf("A sexta oração ficou na média de tempo\n");
	}
	if(o7 > m){
		printf("A setima oração ficou acima da média de tempo\n");
	}else if(o7 < m){
		printf("A setima oração ficou abaixo da média de tempo\n");
	}else {
		printf("A setima oração ficou na média de tempo\n");
	}
	if(o8 > m){
		printf("A oitava oração ficou acima da média de tempo\n");
	}else if(o8 < m){
		printf("A oitava oração ficou abaixo da média de tempo\n");
	}else {
		printf("A oitava oração ficou na média de tempo\n");
	}
	
	
	return 0;
}
