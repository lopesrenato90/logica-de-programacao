/******************************************************************************

Desenvolva em C, um programa de um menu de 4 opções, cuja 3 primeiras opções
escrevam na tela &quot;Opção número escolhido&quot; e a 4 opção encerre o programa.
Qualquer opção diferente de 1, 2, 3 e 4 deve apresentar opção invalida.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main() {
    int opcao; // Variável para armazenar a opção escolhida pelo usuário

    do {
        // Exibe o menu de opções
        printf("\nMenu de opções:\n");
        printf("1. Opção 1\n");
        printf("2. Opção 2\n");
        printf("3. Opção 3\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");

        // Verificando a entrada do usuário
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada inválida! Por favor, insira um número.\n");
            // Limpar o buffer de entrada para evitar looping com entradas inválidas
            while(getchar() != '\n'); 
            opcao = 0; // Resetando a opção para continuar o loop
            continue; // Voltar ao início do loop
        }

        // Processa a opção escolhida
        switch(opcao) {
            case 1:
                printf("Opção número 1 escolhida.\n");
                break;
            case 2:
                printf("Opção número 2 escolhida.\n");
                break;
            case 3:
                printf("Opção número 3 escolhida.\n");
                break;
            case 4:
                printf("Encerrando o programa...\n");
                break;
            default:
                // Caso a opção não seja válida
                printf("Opção inválida! Escolha uma opção válida (1 a 4).\n");
                break;
        }

    } while (opcao != 4); // Continua o loop até que a opção 4 (sair) seja escolhida

    return 0; // Finaliza o programa
}