#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int senha[3] = {4, 5, 2};
int tentativa[3] = {0, 0, 0};
int tentativas;

void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {} // Limpa o buffer de entrada
}

int main() {
    printf("- BEM VINDO AO COFRE MAIS SECRETO DO MUNDO -\n");
    printf("\033[0;31m");
    printf("  _______________________\n");
    printf(" /                       \\\n");
    printf("|   _________________     |\n");
    printf("|  |                 |    |\n");
    printf("|  |    _________    |    |\n");
    printf("|  |   |         |   |    |\n");
    printf("|  |   |  O      |   |    |\n");
    printf("|  |   |_________|   |    |\n");
    printf("|  |                 |    |\n");
    printf("|  |_________________|    |\n");
    printf("|                         |\n");
    printf(" \\_______________________/\n");
    printf("\033[0m");
    printf("Irei definir uma senha de 3 dígitos diferentes e você precisa acertá-la\n");

    while (true) {
        printf("Digite três números para abrir o cofre: \n");

        bool entradaValida = true;
        for (int i = 0; i < 3; i++) {
            if (scanf("%d", &tentativa[i]) != 1) { // Verifica se a entrada é válida
                entradaValida = false;
                limparBufferEntrada(); // Limpa o buffer em caso de erro
                break;
            }
        }

        if (!entradaValida) {
            printf("Entrada inválida! Certifique-se de digitar apenas números.\n");
            continue;
        }

        tentativas = 0; // Reinicia contagem de acertos
        for (int i = 0; i < 3; i++) {
            bool encontrado = false;
            for (int j = 0; j < 3; j++) {
                if (tentativa[i] == senha[j]) {
                    encontrado = true;

                    if (tentativa[i] == senha[i]) {
                        tentativas++;
                        printf("O número %d digitado na posição %d está correto.\n", tentativa[i], i);
                    } else {
                        printf("O número %d está na senha, mas na posição errada.\n", tentativa[i]);
                    }
                }
            }
            if (!encontrado) {
                printf("O número %d digitado não está na senha.\n", tentativa[i]);
            }
        }

        if (tentativas == 3) {
            printf("\033[0;32m");
            printf("Parabéns, você acertou a senha e o cofre está aberto!\n");
            printf("  _______________________\n");
            printf(" /                       \\\n");
            printf("|   _________________     |\n");
            printf("|  |                 |    |\n");
            printf("|  |   ___________   |    |\n");
            printf("|  |  |           |  |    |\n");
            printf("|  |  |           |  |    |\n");
            printf("|  |  |           |  |    |\n");
            printf("|  |  |___________|  |    |\n");
            printf("|  |                 |    |\n");
            printf("|  |_________________|    |\n");
            printf("|                         |\n");
            printf("|      >>>>>>>>           |\n");
            printf(" \\_______________________/\n");
             break;
         }
        }
    return 0;
    }