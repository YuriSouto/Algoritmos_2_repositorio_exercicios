/******************************************************************************

Feito por: Yuri Calil Souto

Data: 15/02/2023

Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma
comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um
algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor
que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.

*******************************************************************************/ 
#include <stdio.h>
#include <locale.h>
int main()
{
    int CarrosVendidos;
    
    setlocale(LC_ALL, "Portuguese");
    
    float SalarioFixo, ComissaoFixa, FixoBonus, ValorTotal, SalarioReal;
    
    printf("Insira o número de carros : ");
    scanf("%d", &CarrosVendidos);
    printf("Insira o valor total vendido no mês : ");
    scanf("%f", &ValorTotal);
    printf("Insira o salário fixo do vendedor : ");
    scanf("%f", &SalarioFixo);
    printf("Insira a comissão fixa do vendedor : ");
    scanf("%f", &FixoBonus);
    
    ComissaoFixa = FixoBonus * CarrosVendidos;
    SalarioReal = SalarioFixo + ComissaoFixa + (ValorTotal*0.05);
    
    printf("O Salário do Vendedor é: %.2f", SalarioReal) ;

    return 0;
}


