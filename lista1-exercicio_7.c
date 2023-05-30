/******************************************************************************

Feito por: Yuri Calil Souto

Data: 15/02/2023

Escreva um algoritmo para ler 2 valores e se o segundo valor informado for ZERO, deve ser lido um novo valor,
ou seja, para o segundo valor não pode ser aceito o valor zero e imprimir o resultado da divisão do primeiro
valor lido pelo segundo valor lido.

*******************************************************************************/ 
#include <stdio.h>
#include <locale.h>
int main()
{
     
    float num1, num2, resultado;
    
    printf("Insira um valor para num1: ");
    scanf("%f", &num1);
    printf("Insira um valor para num2 : ");
    scanf("%f", &num2);
    
    while (num2 == 0){
        printf("Insira um valor para num2 : ");
        scanf("%f", &num2);
    }

    resultado = num1/num2;
    
    printf("resultado: %.2f", resultado);




    return 0;
}



