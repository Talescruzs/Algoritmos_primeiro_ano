/*3. No salão de cabeleileila da cabeleileila Leila é
necessário armazenar algumas informações sobre
ganhos e gastos com cabelos, unhas, hidratação e
unhas. Nesse sentido, Leila deseja controlar seu fluxo
de caixa por dia e gerar relatórios ao final do mês. Em
um dos vetores deve ser colocado o que foi faturado
com seus serviços e no outro seus gastos.
Desenvolva:
a. A soma dos faturamentos;
b. A soma dos gastos;
c. A média diária de faturamento;
d. A média diária de gatos;
e. A diferença entre faturamentos e gastos;
f. Mostre se o salão teve lucro ou prejuízo;
g. Mostre os dias de maior e menor faturamento;
h. Mostre os dias de maior e menor gasto.*/

#include<stdio.h>
#include<locale.h>
#include<time.h>

#define tam 30
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i=0, vetf[tam], vetg[tam], sf=0, sg=0, mdf, mdg, dif, maiorf, maiorg, menorf, menorg;
	
	printf("Digite os faturamentos e os gastos dos dias:\n");
	for(i=0; i<tam; i++){
		printf("Faturamentos do dia %d: ", i+1);
		scanf("%d", &vetf[i]);
		printf("Gastos do dia %d: ", i+1);
		scanf("%d", &vetg[i]);
		printf("\n");
		sf=sf+vetf[i];
		sg=sg+vetg[i];
	}
	maiorf=vetf[0];
	menorf=vetf[0];
	maiorg=vetg[0];
	menorg=vetg[0];
	for(i=0; i<tam; i++){
		if(maiorf<vetf[i]){
			maiorf=vetf[i];
		}
		if(menorf>vetf[i]){
			menorf=vetf[i];
		}
		if(maiorg<vetg[i]){
			maiorg=vetg[i];
		}
		if(menorg>vetg[i]){
			menorg=vetg[i];
		}
	}
	mdf=sf/tam;
	mdg=sg/tam;
	dif=sf-sg;
	printf("A soma dos faturamentos é %d\n", sf);
	printf("A soma dos gastos é %d\n", sg);
	printf("A média diária de faturamento é %d\n", mdf);
	printf("A média diária de gatos é %d\n", mdg);
	printf("A diferença de faturamento em comparação ao gasto é %d\n", dif);
	if(dif>0){
		printf("O salão está tendo lucro\n");
	}
	else{
		printf("O salão está tendo prejuízo\n");
	}
	printf("O maior valor de faturamento foi %d\n", maiorf);
	printf("O menor valor de faturamento foi %d\n", menorf);
	printf("O maior valor de gastos foi %d\n", maiorg);
	printf("O menor valor de gastos foi %d\n", menorg);
	
	return 0;
}
