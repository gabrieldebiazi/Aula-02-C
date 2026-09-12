#include <stdio.h>

int validaHorario(float inicio, float fim) { // Função para validar o horário das aulas (deve estar entre 7h e 19h)
    if (inicio >= 7 && fim <=19) {
        return 1; // Horário válido
    } else {
        return 0; // Horário inválido
    }
}

int aulasConflitam(float inicio1, float fim1, float inicio2, float fim2) { // Função para verificar se o horário das aulas conflitam
    if (fim1 <= inicio2 || fim2 <= inicio1) {
        return 0; // Não há conflito
    } else {
        return 1; // Há conflito
    }
}

void imprimeResultado(int conflito) { // Função para imprimir o resultado da verificação de conflito
    if (conflito == 1) {
        printf("As aulas conflitam.\n");
    } else {
        printf("As aulas não conflitam.\n");
    }
}