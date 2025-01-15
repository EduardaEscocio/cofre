#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int senha[3] = {4, 5, 2};
int tentativa[3] = {0, 0, 0};
int numeroscertos;
int tentativaerrada;
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {} // Limpa o buffer de entrada
}

int main() {
    //interface
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
    printf("Irei definir uma senha de 3 digitos diferentes e voce precisa acerta-la\n");

    //Inicio da validacao dos numeros
    while (numeroscertos != 3) {

        printf("Digite tres numeros para abrir o cofre: \n");

        bool entradaValida = true; //variavel que indica se a entrada eh valida ou nao
        for (int i = 0; i < 3; i++) {
            if (scanf("%d", &tentativa[i]) != 1) { // Verifica se a entrada eh valida
                entradaValida = false;
                limparBufferEntrada(); // Limpa o buffer em caso de erro
                break;
            }
        }

        if (!entradaValida) {
            printf("Entrada invalida! Certifique-se de digitar apenas numeros.\n");
            continue;
        }

        numeroscertos = 0; // Reinicia contagem de acertos
        for (int i = 0; i < 3; i++) {
            bool numeroexistente = false; //variavel para definir se o numero existe ou nao na senha
            for (int j = 0; j < 3; j++) {
                if (tentativa[i] == senha[j]) {
                    numeroexistente = true;//se o numero existir na senha, logo a variavel eh verdadeira

                    if (tentativa[i] == senha[i]) {//se a tentativa que o usuario digitou for igual ao numero da senha na mesma posicao:
                        numeroscertos++;
                        printf("O numero %d digitado na posicao %d esta correto.\n", tentativa[i], i);
                    } else {//se a tentativa que o usuario digitou nao for igual ao numero da senha na mesma posicao, mas existir na senha
                        printf("O numero %d esta na senha, mas voce digitou na posicao errada (%d).\n", tentativa[i], i);
                        
                    }
                }
            }
            //se o valor da variavel for diferente de true, logo o numero nao esta na senha
            if (!numeroexistente) {
                printf("O numero %d digitado nao esta na senha.\n", tentativa[i]);
                
            }
        }
        
        // Caso o usuario acerte os 3 numeros, esse mensagem ira aparecer para dizer que o mesmo acertou a senha 
        if (numeroscertos == 3) {
            printf("\033[0;32m");
            printf("Parabens, voce acertou a senha e o cofre esta aberto!\n");
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
        // Usuario erra caso a quantidade de numeros certos seja inferior a 3:
        else if(numeroscertos!= 3){
            printf("\033[0;31m");
            printf("Voce errou a senha\n");
            printf("\033[0m");
            tentativaerrada+=1; // contador usado para definir a hora certa de dar uma dica;
            // Dicas de acordo com a quantidade de tentativas do usuario:
            if(tentativaerrada==1){
                printf("Dica: todos os numeros que estao na senha vao de 0 a 9\n");
            }
            else if(tentativaerrada==3){
                printf("Dica: o numero do meio eh o maior algarismo da senha\n");
            }
        
            else if(tentativaerrada==6){
                printf("Dica: ha dois numeros que possuem divisores comuns na senha\n");
            }
            else if(tentativaerrada==11){
                printf("Dica: nao ha numeros maiores que 7 na senha\n");
            }
            printf("\n");
        }

}
        
    return 0;
    }
