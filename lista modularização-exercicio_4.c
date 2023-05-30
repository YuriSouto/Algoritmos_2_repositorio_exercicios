/******************************************************************************

Feito por: Yuri Calil Souto

Data: 15/03/2023

Faça um programa que calcule a média aritmética de todas as turmas de uma escola. Considere como entrada os números
de turmas e o número de alunos de cada turma. A média aritmética de cada turma deve ser apresentada, além de média
geral, que será o resultado da média das turmas. O programa deverá ter as funções mediaTurma e mediaEscola. O usuário
entrará, dentro da função main, com a quantidade de turmas e, dentro da função mediaEscola, com o número de alunos de
cada turma.

*******************************************************************************/
#include <stdio.h>

#define MAX_TURMAS 100

void mediaTurma(int turmas, int vetorAlunos[]) {
    float soma = 0.0, media;
    
    for (int i = 0; i < turmas; i++) {
        soma += vetorAlunos[i];
    }
    
    media = soma / turmas;
    
    printf("O valor da média de alunos dessa escola é %.2f\n", media);
}

void mediaEscola(int turmas) {
    printf("Digite o número de alunos de cada turma:\n");
    
    int vetorAlunos[turmas];
    
    for (int i = 0; i < turmas; i++) {
        scanf("%d", &vetorAlunos[i]);
    }
    
    mediaTurma(turmas, vetorAlunos);
}

int main() {
    int turmas;
    
    printf("Digite o número de turmas da escola:\n");
    scanf("%d", &turmas);
    
    mediaEscola(turmas);

    return 0;
}


