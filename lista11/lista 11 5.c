/*5. Gere e mostre uma matriz de tamanho 10x10, onde seus elementos são da forma:*/
#include<stdio.h>
#include<locale.h>
#include<time.h>

#define tam 3
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, j, matriz[tam][tam];
	
	printf("A matriz gerada segundo a regra é:\n");
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			if(i<j){
				matriz[i][j]=(2*i)+(7*j)-2;
			}
			else if(i==j){
				matriz[i][j]=((3*i)*2)-1;
			}
			else if (i>j){
				matriz[i][j]=((4*i)*(4*i)*(4*i))-(5*j)+1;
			}
			printf("%d	", matriz[i][j]);
		}
		printf("\n");
	}
			
	return 0;
}
