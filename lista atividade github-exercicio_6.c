/******************************************************************************

Nome: Yuri Calil Souto
Turma: 02AN
RA: 8138830

Nesse código, o usuário informa um número e é dado à ele o cubo do número digitado
(digita x e retorna x³);

*******************************************************************************/
#include <stdio.h>

float cuboNumero(float n){
    return n*n*n;
}

int main()
{
    float n;
    printf("Insira um numero: ");
    scanf("%f", &n);
    
    printf("\nO cubo do número %.2f é: %.2f", n, cuboNumero(n));
    
    
    return 0;
}

