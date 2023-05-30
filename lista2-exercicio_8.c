/******************************************************************************

Feito por: Yuri Calil Souto

Data: 01/03/2023

Faça um programa que leia um vetor de 10 posições e verifique se existem valores
iguais e os escreva na tela.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[10], i, j, repetidos = 0;
    
    printf("Digite 10 numeros inteiros:\n");
    
    for(i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }
    
    for(i = 0; i < 10; i++){
        for(j = i+1; j < 10; j++){
            if(vetor[i] == vetor[j]){
                printf("%d ", vetor[i]);
                repetidos = 1;
            }
        }
    }
    
    
    if(!repetidos){
        printf("Nao ha valores repetidos");
    }
    
    return 0;
}


