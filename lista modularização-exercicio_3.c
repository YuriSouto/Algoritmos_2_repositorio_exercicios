/******************************************************************************

Feito por: Yuri Calil Souto

Data: 15/03/2023

*******************************************************************************/
#include <stdio.h>

int primo(int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int somaPrimos(int n) {
    int soma = 0;
    int count = 0;
    int num = 2;

    while (count < n) {
        if (primo(num)) {
            soma += num;
            count++;
        }
        num++;
    }

    return soma;
}

int main() {
    int n;
    printf("Digite a quantidade de números primos a serem somados: ");
    scanf("%d", &n);

    int resultado = somaPrimos(n);

    printf("A soma dos %d primeiros números primos é: %d\n", n, resultado);

    return 0;
}


