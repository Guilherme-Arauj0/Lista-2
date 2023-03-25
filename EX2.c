#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

        float salario, prestacao;

    printf("Insira o valor do salario:\n");
    scanf("%f", &salario);
    printf("Insira o valor da prestação:\n");
    scanf("%f", &prestacao);

    if(prestacao > salario * 20/100){
        printf("Empréstimo não concedido");
    } else{
        printf("Empréstimo concedido");
    }



return 0;
    
}
