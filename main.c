#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "");
	
	int num1, num2, num3;
	
	printf("insira 3 números:\n");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	if(num1 > num2 && num2 > num3 && num1 > num3){
		printf("A ordem é: %d %d %d", num1, num2, num3);
	} else if (num2 > num1 && num2 > num3 && num1 > num3){
			printf("A ordem é: %d %d %d", num2, num1, num3);
	}	else if(num3 > num1 && num3 > num2 && num2 > num1){
				printf("A ordem é: %d %d %d", num3, num2, num1);
	}		else if(num1 > num3 && num1 > num2 && num3 > num2){
					printf("A ordem é: %d %d %d", num1, num3, num2);
	}			else if(num2 > num3 && num2 > num1 && num3 > num1){
					printf("A ordem é: %d %d %d", num2, num3, num1);		
	}				else if(num3 > num1 && num3 > num2 && num1 > num2){
						printf("A ordem é: %d %d %d", num3, num1, num2);
	}
	
	
	
	
	
	
	return 0;
}
