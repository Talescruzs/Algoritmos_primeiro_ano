/*Lista 03 questão 9*/

#include<stdio.h>

int main(){
	int pagn2d, pagn3d, idoso2d, estu2d, crian2d, idoso3d, estu3d, crian3d, tudo;

	//entrada	
	printf("numero de pagantes normais no 2d: ");
	scanf("%d", &pagn2d);
	printf("numero de idosos no 2d: ");
	scanf("%d", &idoso2d);
	printf("numero de estudantes no 2d: ");
	scanf("%d", &estu2d);
	printf("numero de crianças no 2d: ");
	scanf("%d", &crian2d);
	printf("numero de pagantes normais no 3d: ");
	scanf("%d", &pagn3d);
	printf("numero de idosos no 3d: ");
	scanf("%d", &idoso3d);
	printf("numero de estudantes no 3d: ");
	scanf("%d", &estu3d);
	printf("numero de crianças no 3d: ");
	scanf("%d", &crian3d);
	
	//processamento	
	
	tudo = pagn2d * 10 + pagn3d * 20 + idoso2d * 5 + estu2d * 5 + crian2d * 5 + idoso3d * 10 + estu3d * 10 + crian3d * 10;
	
	//saida
	
	printf("\no lucro total equivale a: %d reais", tudo );
	printf("\no lucro dos pagantes normais no tipo 2d equivale a: %d reais", pagn2d * 10 );
	printf("\no lucro dos idosos no tipo 2d equivale a: %d reais", idoso2d * 5 );
	printf("\no lucro dos estudantes no tipo 2d equivale a: %d reais", estu2d * 5 );
	printf("\no lucro das crianças no tipo 2d equivale a: %d reais", crian2d * 5 );
	printf("\no lucro dos pagantes normais no tipo 3d equivale a: %d reais", pagn3d * 20 );
	printf("\no lucro dos idosos no tipo 3d equivale a: %d reais", idoso3d * 10 );
	printf("\no lucro dos estudantes no tipo 3d equivale a: %d reais", estu3d * 10 );
	printf("\no lucro das crianças no tipo 3d equivale a: %d reais", crian3d * 10 );
	
	return 0;
}
