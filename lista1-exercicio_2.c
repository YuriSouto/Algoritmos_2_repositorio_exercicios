/******************************************************************************

Feito Por: Yuri calil Souto

Data: 15/02/2023

Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos brancos, nulos e
válidos. Calcular e escrever o percentual que cada um representa em relação ao total de eleitores.
a) Escreva as saídas, entradas e o processamento
b) Implemente em linguagem C


*******************************************************************************/
#include <stdio.h>

int main()
{
    float Nulos,Branco,Validos,Total, Pnulos, Pvalidos, Pbranco;
    
    printf("Insira o Número de Votos Validos: ");
    scanf("%f",&Validos);
    
    printf("Insira o Número de Votos Nulos: ");
    scanf("%f",&Nulos);
    
    printf("Insira o Número de Votos em Branco: ");
    scanf("%f",&Branco);
    
    Total = Nulos+Validos+Branco;
    
    Pnulos = (Nulos * 100) / Total;
    
    Pbranco = (Branco * 100) / Total;
    
    Pvalidos = (Validos * 100) / Total;
    
    
    printf("A porcentagem de votos brancos e: %.2f \nA porcentagem de votos nulos: %.2f \nA porcentagem de votos validos: %.2f \n", Pbranco, Pnulos, Pvalidos);
    
    return 0;
}


