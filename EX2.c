#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

        float salario, prestacao;

    printf("Insira o valor do salario:\n");
    scanf("%f", &salario);
    printf("Insira o valor da presta��o:\n");
    scanf("%f", &prestacao);

    if(prestacao > salario * 20/100){
        printf("Empr�stimo n�o concedido");
    } else{
        printf("Empr�stimo concedido");
    }



return 0;
    
}
