#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "");
	
		float n1, n2, n3, n4, media;
		
	printf("Insira suas 4 notas:\n");
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
		
		media = (n1 + n2 + n3 + n4) / 4;
	
		if(0 < media && media <= 3){
			printf("Sua m�dia � %f e voc� est� REPROVADO\n", media);
			} else if(3.1 <= media && media >= 6.9){
				printf("Sua m�dia � %f e voc� est� de RECUPERA��O\n", media);
				} else if(media > 6.9){
					printf("Sua m�dia � %f e voc� est� APROVADO\n", media);
				}
	
	
	
	
	
	return 0;
}
