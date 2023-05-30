/******************************************************************************

Nome: Yuri Calil Souto
Turma: 02AN
RA:8138830

Nesse programa, o usuário insere algum carctere e o programa irá lhe dizer se o 
carctere digitado está entre as letras a e z

*******************************************************************************/
#include <stdio.h>

void leCaractere (char caractere){
    
    if(caractere>=97 && caractere<=122){
        printf("\nNumero está dentro do intervalo de a até z da tabela ASCII");
    }
    else{
        printf("\nNumero não está dentro do intervalo de a até z da tabela ASCII");
    }
    
}

int main()
{
    char caractere;
    printf("Digite um caractere qualquer de seu teclado: ");
    scanf("%c", &caractere);
    
    leCaractere(caractere);
    
    return 0;
}

