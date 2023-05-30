/******************************************************************************

Feito por: Yuri Calil Souto

Data: 01/03/2023

Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int vetor[4][4], i, j, contador = 0;
    
    printf("Digite números para uma matriz 4x4:\n");
    
    for(i=0;i<4;i++){
        
        for(j=0;j<4;j++){
        
            scanf("%d", &vetor[i][j]);
        
        }   
    }
    
    printf("\n------------------------\n");
    
    for(i=0;i<4;i++){
        
        for(j=0;j<4;j++){
        
            if(vetor[i][j]>10){
                
                printf("%d\n", vetor[i][j]);
                contador++;
            }
        
        }   
    }
    
    printf("\nNessa matriz, temos %d números maiores que 10", contador);
    
    return 0;
}

