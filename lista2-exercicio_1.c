/******************************************************************************

Feito por: Yuri Calil Souto

Data: 01/03/2023


Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado
das componentes deste vetor, armazenando o resultado em outro vetor. Os
conjuntos têm 10 elementos cada. Imprimir todos os conjuntos (vetores).

*******************************************************************************/
#include <stdio.h>

int main()
{

    float vetor1[100], vetor2[100], quadrado;
    int i;
    
    printf("Escaneie 10 números:");
    
    for(i=0;i<10;i++){
        
        scanf("%f", &vetor1[i]);
        
    } 
    
    for(i=0; i<10; i++){
        
        quadrado = vetor1[i]*vetor1[i];
        
        vetor2[i] = quadrado;
        
    }
    for(i=0;i<10;i++){
        
        printf("%.2f ", vetor2[i]);
        
    }
    
    return 0;
}


