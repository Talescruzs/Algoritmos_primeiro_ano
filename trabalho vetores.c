//Aluno: Tales Cruz

#include<stdio.h>
#include<locale.h>
#include<time.h>

#define tamanho 10
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, a=0, b=0, c=0, j, interseccao[i], repetidos=0, tamanhou=tamanho+tamanho-repetidos, conjuntoU[tamanho], conjuntoB[tamanho], uniao[tamanhou], amenosb[i], bmenosa[i];
		
	//entrada:
	for(i=0; i<tamanho; i++){
		printf("digite valores para o conjunto A[%d]: ", i);
		scanf("%d", &conjuntoU[i]);
		for(j=1; j<tamanho+1; j++){
			if(i-j >= 0){
				if(conjuntoU[i]==conjuntoU[i-j]){
					i--;
					printf("este valor já foi digitado\n");
				}
			}else{
				break;
			}
		}
	}
	system("cls");
	for(i=0; i<tamanho; i++){
		printf("digite valores para o conjunto B[%d]: ", i);
		scanf("%d", &conjuntoB[i]);
		for(j=1; j<tamanho+1; j++){
			if(i-j >= 0){
				if(conjuntoB[i]==conjuntoB[i-j]){
					i--;
					printf("este valor já foi digitado\n");
				}
			}else{
				break;
			}
		}
	}
	//processamento - interseccao:
	system("cls");
	for(i=0; i<tamanho; i++){
		for(j=0; j<tamanho; j++){
			if(conjuntoU[i] == conjuntoB[j]){
				interseccao[repetidos]=conjuntoU[i];
				repetidos++;
				break;
			}
		}
	}
	//saída - interseccao:
	printf("A intersecção entre A e B é:");
	for(i=0; i<repetidos; i++){
		printf("\nintersecção[%d] = %d", i, interseccao[i]);
	}
	//processamento - União:
	for(i=0; i<tamanho; i++){
		uniao[a]=conjuntoU[i];
		a++;
	}
	for(i=0; i<tamanho; i++){
		for(j=0; j<tamanho; j++){
			if(conjuntoB[i]==conjuntoU[j]){
				b=1;
				break;
			}
		}
		if(b==0){
			uniao[a]=conjuntoB[i];
			a++;
		}
		b=0;
	}
	//saída - União:
	printf("\n\nOs valores da união dos vetores são:\n");
	for(i=0; i<a; i++){
		printf("uniao[%d] = %d\n", i, uniao[i]);
	}
	//processamento - A-B:
	for(i=0; i<a; i++){
		for(j=0; j<tamanho; j++){
			if(conjuntoB[j]==uniao[i]){
				b++;
			}
		}
		if(b==0){
			amenosb[c]=uniao[i];
			c++;
		}
		b=0;
	}
	//saída - A-B:
	printf("\n\nOs valores da espressão A-B:\n");
	for(i=0; i<c; i++){
		printf("A-B[%d] = %d\n", i, amenosb[i]);
	}
	c=0;
	//processamento - B-A:
	for(i=0; i<a; i++){
		for(j=0; j<tamanho; j++){
			if(conjuntoU[j]==uniao[i]){
				b++;
			}
		}
		if(b==0){
			bmenosa[c]=uniao[i];
			c++;
		}
		b=0;
	}
	//saída - B-A:
	printf("\n\nOs valores da espressão B-A:\n");
	for(i=0; i<c; i++){
		printf("B-A[%d] = %d\n", i, bmenosa[i]);
	}
		
	return 0;
}
