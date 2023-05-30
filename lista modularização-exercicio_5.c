/******************************************************************************

Feito por: Yuri Calil Souto 

Data: 15/03/2023

Faça uma função que calcule o n-ésimo termo da série de Fibonacci. 
O protótipo as função é int Fibonacci(int n).

*******************************************************************************/
#include <stdio.h>

int fibonacci(int n) {
    int a = 0, b = 1, temp;

    if (n == 0) {
        return a;
    }

    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = fibonacci(n);

    printf("O %dº número da sequência de Fibonacci é: %d\n", n, resultado);

    return 0;
}

