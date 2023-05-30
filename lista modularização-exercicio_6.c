/******************************************************************************

Feito por: Yuri Calil Souto 

Data: 15/03/2023

Faça uma função que retorne o resultado do somatório abaixo, 
sendo n o parâmetro de entrada da função.

*******************************************************************************/
#include <stdio.h>

int somatoria(int n) {
    int result = 0;

    for (int i = 1; i <= n; i++) {
        result += 5 * i * i + 2 * i + 8;
    }

    return result;
}

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    somatoria(n);

    printf("O resultado do somatório é: %d\n", somatoria(n));

    return 0;
}


