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
			printf("Sua cidade é Brasília!");
			break;
		case 71:
			printf("Sua cidade é Salvador!");
			break;
		case 11:
			printf("Sua cidade é São Paulo!");
			break;
		case 21:
			printf("Sua cidade é Rio de Janeiro!");
			break;
		case 32:
			printf("Sua cidade é Juiz de Fora!");
			break;
		case 19:
			printf("Sua cidade é Cmapinas!");
			break;
		case 27:
			printf("Sua cidade é Vitória!");
			break;
		case 31:
			printf("Sua cidade é Belo Horizonte!");
			break;
		default:
			printf("Esse número não corresponde a nenhum ddd no nosso banco de dados.");
			break;
	}
	
	return 0;
}
