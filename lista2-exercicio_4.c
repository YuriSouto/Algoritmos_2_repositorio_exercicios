/******************************************************************************

Feito por: Yuri Calil Souto

Data: 01/03/2023

Escreva um programa que leia 10 números inteiros e os armazene em um vetor.
Imprima o vetor, o maior elemento e a posição que ele se encontra.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numeros[10], maior = 0, posicao = 0, i;
    
    printf("Digite 10 números inteiros:\n");
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
        
        if (numeros[i] > maior) {
            maior = numeros[i];
            posicao = i;
        }
    }
    
    printf("\nVetor de números digitados: ");
    for (i=0; i<10; i++) {
        printf("%d ", numeros[i]);
    }
    
    printf("\nMaior número: %d", maior);
    printf("\nPosição do maior número: %d", posicao);
    
    return 0;
}

