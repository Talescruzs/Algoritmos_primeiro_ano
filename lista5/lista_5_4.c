//4. Em sua última era Lady Gaga vendeu poucos discos físicos, com isso você deve fazer em um algoritmo que recebe as quantidades vendidas em 4 países (Brasil, Argentina, Chile e Uruguai) e dessa forma mostre o nome do país que menos vendeu códigos do seu último disco.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float br, ar, ch, ur;
	
	//entrada
	printf("Digite o numero de discos vendidos no Brasil: ");
	scanf("%f", &br);
	printf("Digite o numero de discos vendidos na Argentina: ");
	scanf("%f", &ar);
	printf("Digite o numero de discos vendidos no Chile: ");
	scanf("%f", &ch);
	printf("Digite o numero de discos vendidos no Uruguai: ");
	scanf("%f", &ur);
	//processamento e saída
	
	if(br < ar && br < ch && br < ur){
		printf("O país com menos discos vendidos foi o Brasil");
	}if(ar < br && ar < ch && ar < ur){
		printf("O país com menos discos vendidos foi a Argentina");
	}if(ch < br && ch < ar && ch < ur){
		printf("O país com menos discos vendidos foi o Chile");
	}if(ur < br && ur < ar && ur < ch){
		printf("O país com menos discos vendidos foi o Uruguai");
	}
	
	return 0;
}
