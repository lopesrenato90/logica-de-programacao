/******************************************************************************

Escreva um programa em C que solicita 10 números ao usuário, através de um laço while, e ao final mostre os dois maiores números digitados pelo usuário.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main() {
    int numero, maior1, maior2, contador;

    contador = 0;
    maior1 = maior2 = -2147483647; // Inicializa os maiores com o menor valor possível para um int

    while (contador < 10) {
        printf("Digite o %dº número: ", contador + 1);
        scanf("%d", &numero); // Lê o número digitado pelo usuário

        // Verifica se o número é maior que o maior encontrado até agora
        if (numero > maior1) {
            maior2 = maior1; // Atualiza o segundo maior
            maior1 = numero; // Atualiza o maior
        } else if (numero > maior2 && numero != maior1) { // Verifica se é maior que o segundo maior e diferente do maior
            maior2 = numero; // Atualiza o segundo maior
        }

        contador++; // Incrementa o contador
    }

    // Exibe os dois maiores números
    printf("\nOs dois maiores números digitados foram: %d e %d\n", maior1, maior2);

    return 0; // Finaliza o programa
}