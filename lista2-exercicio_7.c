/******************************************************************************

Feito por: Yuri Calil Souto

Data: 01/03/2023

Faça um programa que preencha um vetor com 10 números reais, calcule e mostre
a quantidade de números negativos e a soma dos números positivos desse vetor.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    float vetor[10], soma;
    int i, contador;
    
    printf("Insira 10 números:\n");
    
    for(i=0; i<10; i++){
        
        scanf("%f", &vetor[i]);
        
    }
    
    for(i=0; i<10; i++){
        
        if(vetor[i]>0){
            
            soma = soma + vetor[i];
            
        }
        else{
            
            contador++;
            
        }
        
    }
    
    printf("O número de negativos nesse vetor é %d e a soma dos números que são positivo é %.2f", contador, soma);

    return 0;
}

