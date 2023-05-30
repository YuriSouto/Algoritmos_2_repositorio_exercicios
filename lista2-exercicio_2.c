/******************************************************************************

Feito por: Yuri Calil Souto

Data: 01/03/2023

Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois
valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu
programa deverá escrever a soma dos valores encontrados nas respectivas posições
X e Y.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int vetor[8], i, x, y, resultado;
    
    for(i=0;i<8;i++){
        
        scanf("%d", &vetor[i]);
        
    }
    printf("\nescaneie duas posicoes (x e y) para achar no vetor: ");
    
    scanf("%d", &x);
    
    scanf("%d", &y);
    
    while(x>7){
        
        printf("\nErro, escaneie outra posição para x");
        scanf("%d",&x);
        
    }
    
    while(y>7){
        
        printf("\nErro, escaneie outra posição para x");
        scanf("%d",&y);
        
    }
    
    resultado = vetor[x]+vetor[y];
    
    printf("Resultado = %d", resultado);

    return 0;
}

