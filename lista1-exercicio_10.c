/******************************************************************************
Feito por: Yuri Calil Souto

Data: 115/02/2023

Faça um algoritmo para ler dois vetores V1 e V2 de 115 números cada. Calcular e escrever a quantidade de
vezes que V1 e V2 possuem os mesmos números e nas mesmas posições.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int vetor1[15], vetor2[15], i, contador = 0;
    
    for(i=0; i<15; i++){
        
        scanf("%d", &vetor1[i]);
    }
    
    for(i=0; i<15; i++){
        
        scanf("%d", &vetor2[i]);
    }
    
    for(i=0; i<15; i++){
        
        if(vetor1[i] == vetor2[i]){
            
            contador++;    
            
        }
        
    }

    printf("Há %d numeros em comum", contador);
    return 0;
}

