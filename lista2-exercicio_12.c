/******************************************************************************

Feito por: Yuri Calil Souto

Data: 01/03/2023

Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do
maior valor.

*******************************************************************************/
#include <stdio.h>



int main() {
    
    int matriz[4][4];
    int i, j, maior, posicao_i, posicao_j;
    
    printf("Digite os elementos da matriz 4x4:\n");
    
    for (i = 0; i < 4; i++) {
        
        for (j = 0; j < 4; j++) {
            
            scanf("%d", &matriz[i][j]);
            
        }
    }
    
    maior = matriz[0][0];
    posicao_i = 0;
    posicao_j = 0;
    
    for (i = 0; i < 4; i++) {
        
        for (j = 0; j < 4; j++) {
            
            if (matriz[i][j] > maior) {
                
                maior = matriz[i][j];
                posicao_i = i;
                posicao_j = j;
            }
        }
    }
    
    printf("O maior valor é: %d\n", maior);
    printf("A posição do maior valor é: (%d, %d)\n", posicao_i, posicao_j);
    
    return 0;
}


