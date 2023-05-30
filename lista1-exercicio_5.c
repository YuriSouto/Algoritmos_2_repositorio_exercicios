/******************************************************************************

Feito por: Yuri Calil Souto

Data: 15/02/2023

Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se que ele recebe
uma comissão de 3% sobre o total das vendas até R $1.500,00 mais 5% sobre o que ultrapassar este valor,
calcular e escrever o seu salário total.

*******************************************************************************/ 
#include <stdio.h>
#include <locale.h>
int main()
{
    float valorFixo, valorComissao, valorReceber, valorVendido;
    
    printf("Insira o salário do funcionário : ");
    scanf("%f", &valorFixo);
    printf("Insira o total das venda desse mês : ");
    scanf("%f", &valorVendido);
    
    if(valorVendido<=1500.00){
        
       valorComissao = valorFixo*0.03;
    }
    else {
       valorComissao = valorFixo*0.05;
    }
    
    valorReceber = valorComissao+valorFixo;
    
    
    printf("O valor a receber é : %.2f", valorReceber);

    return 0;
}



