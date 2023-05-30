/******************************************************************************

Feito por: Yuri Calil Souto

Data: 01/03/2023

Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
elementos. Escreva ao final a matriz obtida.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int vetor[5][5], i, j;
    
    printf("Digite 1 para os números da diagonal principal da matriz 5x5:\n");

    for(i=0;i<5;i++){
        
        for(j=0;j<5;j++){
            if(i==j)
                vetor[i][j] = 1;
            else
                vetor[i][j] = 0;
        }   
        
    }
    
    for(i=0;i<5;i++){
        
        for(j=0;j<5;j++){
        
            printf("  %d  ", vetor[i][j]);
        }   
        printf("\n");
        
    }
    
    

    return 0;
}

