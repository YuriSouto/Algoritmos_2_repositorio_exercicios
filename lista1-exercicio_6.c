/******************************************************************************

Feito por: Yuri Calil Souto

Data: 15/02/2023

Considere o seguinte algoritmo. Realize o teste de mesa para os valores dados e preencha o quadro::

*******************************************************************************/ 
#include <stdio.h>
#include <locale.h>
int main()
{
    int x,y,z;
    char resposta;
    
    printf("Insira o valor de x : ");
    scanf("%d", &x);
    printf("Insira o valor de y : ");
    scanf("%d", &y);
    z = (y*x) + 5;
    if (z<=0){
        resposta = 'A';
    }
    else if(z<=100){
        resposta = 'B';
    }
    else {
        resposta = 'C';
    }
    
    printf("resposta: %c", resposta);




    return 0;
}

