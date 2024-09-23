/******************************************************************************

Escreva um programa em C que solicita 10 números ao usuário, através de um laço
while, e ao final mostre os dois maiores números digitados pelo usuário.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // Para usar INT_MIN

int main() {
    int i = 0;
    int numero;
    int maior1 = INT_MIN; // Inicializa maior1 com o menor valor possível
    int maior2 = INT_MIN; // Inicializa maior2 com o menor valor possível

    // Loop para receber 10 números do usuário
    do {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numero);

        // Atualiza maior1 e maior2
        if (numero > maior1) {
            maior2 = maior1; // Atualiza o segundo maior
            maior1 = numero; // Atualiza o maior
        } else if (numero > maior2 && numero != maior1) {
            maior2 = numero; // Atualiza o segundo maior
        }

        i++;
    } while (i < 10); // Continua até que 10 números sejam digitados

    // Exibe os dois maiores números
    if (maior2 == INT_MIN) {
        printf("\nNão foram digitados dois números distintos.\n");
    } else {
        printf("\nOs dois maiores números digitados são: %d e %d\n", maior1, maior2);
    }

    return 0; // Finaliza o programa
}