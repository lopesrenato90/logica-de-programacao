/******************************************************************************

Desenvolva em C, um programa que leia 10 números inteiros e após isso apresente o
maior valor, o menor valor e a média.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main() {
    int numero, maximo, minimo, soma;
    float media;
    int i;

    // Inicializa maximo e minimo com os limites da faixa de inteiros
    maximo = -2147483647; // Menor valor possível para um int
    minimo = 2147483647;  // Maior valor possível para um int
    soma = 0; // Inicializa a soma

    // Loop para ler 10 números
    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numero); // Lê o número digitado pelo usuário

        // Atualiza o máximo se o número digitado for maior
        if (numero > maximo) {
            maximo = numero;
        }
        // Atualiza o mínimo se o número digitado for menor
        if (numero < minimo) {
            minimo = numero;
        }

        soma += numero; // Adiciona o número à soma total
    }

    // Calcula a média dos números digitados
    media = (float)soma / 10.0;

    // Exibe os resultados
    printf("\nO maior valor digitado: %d\n", maximo);
    printf("O menor valor digitado: %d\n", minimo);
    printf("A média dos números digitados: %.2f\n", media);

    return 0; // Finaliza o programa
}