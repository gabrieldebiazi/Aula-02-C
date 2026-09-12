#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    char operador;
    char continuar = 's';

    do {
        printf("Digite o primeiro número: ");
        scanf("%d", &a);
        printf("Digite o operador (+, -, *, /): ");
        scanf(" %c", &operador);
        printf("Digite o segundo número: ");
        scanf("%d", &b);

        switch (operador) {
        case '+':
            printf("Somando %d com %d: %d\n", a, b, a + b);
            break;
        case '-':
            printf("Subtraindo %d com %d: %d\n", a, b, a - b);
            break;
        case '*':
            printf("Multiplicando %d com %d: %d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0) {
                printf("Dividindo %d com %d: %d\n", a, b, a / b);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
            break;
        }

        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's');
    
    
}