/******************************************************************************

Nome: Yuri Calil Souto
Turma: 02AN
RA: 8138830

Neste programa, o usuário irá inserir um valor para o raio de uma circunferência,
com a finalidade de ser calculado a área da mesma. Os parãmetros serão passsados
para uma função que executará os cálculos e retornará um valor para a função principal.


*******************************************************************************/
#include <stdio.h>

float areaCircunferencia(float raio){
    float area;
    area = raio*raio*3.14;
    return area;
    ;
}

int main()
{
    
    float raio;
    printf("Insira um valor para o raio da circunferencia que deseja-se calcular a area\n(medida informada devera ser dada em metros");
    

    printf("\nPara o valor do raio = ");
    scanf("%f", &raio);
    
    
    printf("\nO valor da area da circunferencia sera = %.2f", areaCircunferencia(raio));


    return 0;
}

