#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
		int ddd;
	
	printf("Insira o ddd da sua cidade: \n");
	scanf("%d", &ddd);
	system("cls");
	
	switch(ddd){
		case 61:
			printf("Sua cidade � Bras�lia!");
			break;
		case 71:
			printf("Sua cidade � Salvador!");
			break;
		case 11:
			printf("Sua cidade � S�o Paulo!");
			break;
		case 21:
			printf("Sua cidade � Rio de Janeiro!");
			break;
		case 32:
			printf("Sua cidade � Juiz de Fora!");
			break;
		case 19:
			printf("Sua cidade � Cmapinas!");
			break;
		case 27:
			printf("Sua cidade � Vit�ria!");
			break;
		case 31:
			printf("Sua cidade � Belo Horizonte!");
			break;
		default:
			printf("Esse n�mero n�o corresponde a nenhum ddd no nosso banco de dados.");
			break;
	}
	
	return 0;
}
