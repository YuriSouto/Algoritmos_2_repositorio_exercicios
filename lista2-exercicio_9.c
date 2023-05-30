/******************************************************************************

Feito por: Yuri Calil Souto

Data: 01/03/2023

Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que
possuírem valores negativos.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[10], i;
    
    printf("Insira 10 números:\n");

    
    for(i=0;i<10;i++){
        
        scanf("%d", &vetor[i]);
        
    }
    
    for(i=0;i<10;i++){
        
        if(vetor[i]<0){
            
            vetor[i] = 0;
            
        }
        
    }
    
    for(i=0;i<10;i++){
        
        printf("\n%d", vetor[i]);
        
    }
    
    return 0;
}

