/******************************************************************************

Nome: Yuri Calil Souto
Turma: 02AN
RA: 8138830

Neste programa, o usuário digita um número inteiro e é retornado a ele uma 
quantidade de asteriscos (*), correspondente ao número digitado


*******************************************************************************/
#include <stdio.h>


void asterisco(int n){
    
    int i=0;
    
    while(n<0){
        printf("\nNumero invalido!Digite novamente: ");
        scanf("%d", &n);
    }
    while (i<n){
        printf("*");
        i++;
    }
    
}

int main()
{
    int n, result;
    printf("Insira um número inteiro: ");
    scanf("%d", &n);
    asterisco(n);
    
    return 0;
}
