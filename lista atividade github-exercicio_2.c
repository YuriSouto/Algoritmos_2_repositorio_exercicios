/******************************************************************************

Nome: Yuri Calil Souto
Turma: 02AN
RA: 8138830

Neste programa, o usuário insere 2 números e é retornado para ele, por meio
de uma função, o resultado da divisão entre esses dois números.

*******************************************************************************/
#include <stdio.h>


float retornaResultado(int x, int y){
    if (y == 0){
        return 0; 
    }
    return (float) x / y; 
}

int main(){
    int x, y;
    
    printf("Insira dois números inteiros para efetuarmos a operação de divisão:\n");
    
    printf("\nDigite o primeiro número: ");
    scanf("%d", &x);
    
    printf("\nDigite o segundo número: ");
    scanf("%d", &y);
    
    while (y == 0){
        printf("\nNenhum número é divisível por 0! Por favor, insira outro número: ");
        scanf("%d", &y);
    }
    
    printf("\nO resultado da divisão é: %.2f\n", retornaResultado(x,y));
    
    return 0;
}


