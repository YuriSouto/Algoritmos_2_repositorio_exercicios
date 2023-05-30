/******************************************************************************

Feito por: Yuri Calil Souto

Data 15/03/2023

Faça um programa que receba dois números e descubra seu MMC. A identificação do MMC
deve ser feita dentro de uma função que retorne tal valor. A leitura e a escrita dos dados,
além da ativação do módulo MMC, devem ficar na função principal.

*******************************************************************************/
#include <stdio.h>

int retornaMMC(int x, int y) {
    int maior, mmc;
    
    if (x > y) {
        maior = x;
    }
    else {
        maior = y;
    }
    
    mmc = maior;
    
    while (1) {
        if (mmc % x == 0 && mmc % y == 0) {
            break;
        }
        mmc += maior;
    }
    
    return mmc;
}

int main() {
    int x, y;
    
    printf("Digite 2 números inteiros:\n");
    scanf("%d", &x);
    scanf("%d", &y);
    
    printf("\nO MMC desses números é %d", retornaMMC(x, y));

    return 0;
}



