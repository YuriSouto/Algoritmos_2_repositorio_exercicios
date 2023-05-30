/******************************************************************************

Nome: Yuri Calil Souto
Turma: 02AN
RA: 8138830

Este programa realiza/imita a funcionalidade de um caixa eletrônico, visando que
o usuário faça toda a movimentação desejada dentro da conta e que o processo só
seja encerrado quando o mesmo desejar.

*******************************************************************************/
#include <stdio.h>

float saldo = 0;

void insereDeposito(float *saldo) {
    float deposito;
    printf("\nInsira o valor para deposito: ");
    scanf("%f", &deposito);

    *saldo += deposito;

    printf("\nValor depositado: %.2f", deposito);
    printf("\nSaldo Atual: %.2f", *saldo);
}

void consultaSaldo(float saldo) {
    printf("O saldo atual é = R$%.2f\n", saldo);
}

void saqueDinheiro(float *saldo) {
    float valor, saque;
    printf("\nInsira o valor do saque: ");
    scanf("%f",&valor);
    if (valor > *saldo) {
        printf("\nERRO! Saldo requerido indisponível. Insira um valor válido: ");
        scanf("%f", &valor);
    } else {
        printf("\nSaque realizado. Valor do saque: R$%.2f", valor);
        *saldo -= valor;
        printf("\nSaldo atual: %.2f", *saldo);
    }
}

int main() {
    int menu;
    printf("Acesso a conta Banco XXXXXXXX\n");
    printf("Ola, Seja bem vindo!\n");
    printf("----------------------------\n");

    do {
        printf("Menu\n");
        printf("1 - Consultar saldo da conta\n");
        printf("2 - Realizar saque\n");
        printf("3 - Realizar deposito\n");
        printf("4 - Encerrar sessao\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                consultaSaldo(saldo);
                printf("\n\n----------------------\n\n");
                break;
            case 2:
                saqueDinheiro(&saldo);
                printf("\n\n----------------------\n\n");
                break;
            case 3:
                insereDeposito(&saldo);
                printf("\n\n----------------------\n\n");
                break;
            case 4:
                printf("Encerrando sessao...\n");
                printf("\n\n----------------------\n\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (menu != 4);

    printf("Sessao encerrada, agradecemos por usar nossos servicos\n");

    return 0;
}


