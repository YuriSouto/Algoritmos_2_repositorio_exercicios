/******************************************************************************

Nome: Yuri Calil Souto

Esse programa retorna uma função que retorna a diferença entre doi números 
inteiros digitados pelo usuário.

*******************************************************************************/
#include <stdio.h>

int retornaNumero(int x, int y){
    return x - y;
}


int main()
{
    int x, y;
    printf("Digite doi números inteiros\n");

    printf("\nDigite um número: ");
    scanf("%d", &x);
    
    printf("\nDigite outro número: ");
    scanf("%d", &y);
    
    printf("\nA diferença entre os números digitados é: %d", retornaNumero(x,y));
    
    return 0;
}

