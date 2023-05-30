/******************************************************************************

Criado por: Yuri Calil Souto
Data: 08/02/2023


Exercício 1 


*******************************************************************************/
#include <stdio.h>

void main()
{
    int a,b,c, maior;
        printf("escaneie uma variável: ");
        scanf("%d %d %d",&a,&b,&c);
    maior = a;
    if(maior<b){
        maior = b;
    }
    if (maior<c) {
        maior = c;
    }
    printf("O maior é: %d", maior);
}


