/******************************************************************************

Feito por: Yuri Calil Souto

Data: 01/03/2023

Crie um programa que leia 6 valores inteiros e, em seguida, mostre na tela os
valores lidos na ordem inversa.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int vetor[6], i;
    
    printf("Escaneie 6 números: ");
    
    for(i=0; i<6;i++){
        
        scanf("%d", &vetor[i]);
        
    }
    
    printf("\nA ordem inversa é: ");
    
    
    for(i=5;i>=0; i--){
        
        printf("%d\n", vetor[i]);
        
    }
    
    return 0;
}
