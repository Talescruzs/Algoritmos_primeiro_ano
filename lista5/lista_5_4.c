//4. Em sua �ltima era Lady Gaga vendeu poucos discos f�sicos, com isso voc� deve fazer em um algoritmo que recebe as quantidades vendidas em 4 pa�ses (Brasil, Argentina, Chile e Uruguai) e dessa forma mostre o nome do pa�s que menos vendeu c�digos do seu �ltimo disco.

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
	//processamento e sa�da
	
	if(br < ar && br < ch && br < ur){
		printf("O pa�s com menos discos vendidos foi o Brasil");
	}if(ar < br && ar < ch && ar < ur){
		printf("O pa�s com menos discos vendidos foi a Argentina");
	}if(ch < br && ch < ar && ch < ur){
		printf("O pa�s com menos discos vendidos foi o Chile");
	}if(ur < br && ur < ar && ur < ch){
		printf("O pa�s com menos discos vendidos foi o Uruguai");
	}
	
	return 0;
}
