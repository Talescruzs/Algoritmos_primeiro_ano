/*2. Crie um programa que solicita um n?mero inteiro infinitas vezes at? que um n?mero
que seja ?mpar seja digitado.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, i=0;
	
	i==0;
	do {
		printf("\ndigite um n?mero inteiro ");
		scanf("%d", &n);
		if(n%2!=0){
			break;
		}
		i++;
		} while(i>-1);
	
	
	return 0;
}
