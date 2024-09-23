/******************************************************************************

Desenvolva um programa em C, que escreva de 90 a 30, em ordem decrescente de 3
em 3.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i; // Variável de controle do loop

    // Inicializa a variável i com 90
    i = 90;

    // Loop que decrementa i de 3 em 3 até chegar a 30
    for (i = 90; i >= 30; i -= 3) {
        printf("%d ", i); // Imprime o valor atual de i
    }

    printf("\n"); // Nova linha após imprimir todos os números

    return 0; // Finaliza o programa
}