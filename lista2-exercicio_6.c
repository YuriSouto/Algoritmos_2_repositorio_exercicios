/******************************************************************************

Feito por: Yuri Calil Souto

Data: 01/03/2023

Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor,
calcule e imprima a média geral.

*******************************************************************************/
#include <stdio.h>

int main()
{   
    float vetor[15], media, contador = 0, soma = 0;
    int i;
    
    printf("Insira a Nota dos Alunos: ");
    
    for(i=0;i<15;i++){
        
        scanf("%f", &vetor[i]);
        contador++;
        
    }
    
    soma = vetor[0];
    
    for(i=1; i<15; i++){
        
        
        soma = soma + vetor[i];
        
    }
    
    media = soma/contador;
    
    printf("A media é %.2f", media);
    
    return 0;
}

