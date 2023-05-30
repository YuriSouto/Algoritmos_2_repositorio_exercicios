/******************************************************************************

Feito por: Yuri Calil Souto

Data: 01/03/2023

Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int vetor[10], i, contador = 0;
    
    for(i=0;i<10;i++){
        
        scanf("%d", &vetor[i]);
        
    }
    for(i=0;i<10;i++){
        
        if(vetor[i]%2 == 0){
            
            contador++;
            
        }
        
    }
    
    printf("Foram encontrados %d numeros pares", contador);
    
    return 0;
}

