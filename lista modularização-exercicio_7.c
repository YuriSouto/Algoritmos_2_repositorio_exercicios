/******************************************************************************

Feito por: Yuri Calil Souto

Data: 15/03/2023

Faça uma função que faça a rotação de três números. Tais números precisam ser passados como parâmetros, por
referência. Por exemplo, se a função receber os valores 5 8 e 9, nesta ordem, os valores de saída nessas variáveis serão 8, 9
e 5, respectivamente.

*******************************************************************************/
#include <stdio.h>

void rotacionarNumeros(int *num1, int *num2, int *num3) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = *num3;
    *num3 = *temp;
}

int main() {
    int num1, num2, num3;

    printf("Digite os três números separados por espaços: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    rotacionarNumeros(&num1, &num2, &num3);

    printf("Após a rotação: %d %d %d\n", num1, num2, num3);

    return 0;
}


