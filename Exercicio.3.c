/******************************************************************************

Desenvolva um programa em C, que escreva de 90 a 30, em ordem decrescente de 3
em 3.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero = 90; // Inicializa a variável com 90

    // Loop que decrementa 'numero' de 3 em 3 até que seja menor que 30
    do {
        printf("%d ", numero); // Imprime o valor atual de 'numero'
        numero -= 3; // Decrementa 'numero' em 3
    } while (numero >= 30); // Continua enquanto 'numero' for maior ou igual a 30

    printf("\n"); // Nova linha após a impressão dos números

    return 0; // Finaliza o programa
}