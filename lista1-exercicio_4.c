/******************************************************************************

Feito por: Yuri Calil Souto

Data: 15/02/2023

As maçãs custam R $1,30 cada se forem compradas menos de uma dúzia, e R $1,00 se forem compradas pelo
menos 12. Escreva um programa que leia o número de maçãs compradas e escreva o custo total da compra.

*******************************************************************************/ 
#include <stdio.h>
#include <locale.h>
int main()
{
    int macasCompradas;
    float valorTotal;
    
    printf("Insira o número de maçãs compradas : ");
    scanf("%d", &macasCompradas);
    
    if(macasCompradas<12){
       valorTotal = macasCompradas*1.30;
    }
    else {
       valorTotal = macasCompradas*1.00;
    }
    
    
    
    printf("O total vendido foi: %.2f", valorTotal);

    return 0;
}


