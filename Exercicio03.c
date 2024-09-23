/******************************************************************************

Escreva um programa em C que leia 10 números reais e os armazene em um array.
Calcule e exiba a média dos números armazenados no array.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float numeros[10]; // Array para armazenar os 10 números reais
    float soma = 0, media; // Variáveis para soma e média
    int i; // Contador

    printf("Digite 10 números reais:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%f", &numeros[i]); // Lê o número digitado pelo usuário

        soma += numeros[i]; // Acumula a soma dos números
    }

    media = soma / 10.0; // Calcula a média

    // Exibe a média com duas casas decimais
    printf("\nA média dos números digitados é: %.2f\n", media);

    return 0; // Finaliza o programa
}