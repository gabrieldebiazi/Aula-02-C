#include <stdio.h>
#include "aula.h"

int main() {
    float inicio1, fim1, inicio2, fim2;

    printf("Digite o horário de início da primeira aula: ");
    scanf("%f", &inicio1);
    printf("Digite o horário de término da primeira aula: ");
    scanf("%f", &fim1);
    printf("Digite o horário de início da segunda aula: ");
    scanf("%f", &inicio2);
    printf("Digite o horário de término da segunda aula: ");
    scanf("%f", &fim2);

    if (validaHorario(inicio1, fim1) == 0 || validaHorario(inicio2, fim2) == 0) {
        printf("Erro: Horário inválido. As aulas devem estar entre 7h e 19h.\n");
        return 0;
    }

    int conflito = aulasConflitam(inicio1, fim1, inicio2, fim2);
    imprimeResultado(conflito);
}