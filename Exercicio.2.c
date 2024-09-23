/******************************************************************************

Desenvolva em C, um programa que leia 10 números inteiros e após isso apresente o
maior valor, o menor valor e a média.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[10]; // Array para armazenar os 10 números
    int i = 0; // Contador
    int maior, menor; // Variáveis para armazenar o maior e menor número
    float soma = 0.0, media; // Variáveis para soma e média

    printf("Digite 10 números inteiros:\n");

    // Loop para ler 10 números do usuário
    do {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]); // Lê o número digitado pelo usuário
        
        soma += numeros[i]; // Acumula a soma dos números
        i++;
    } while (i < 10);

    // Inicializa maior e menor com o primeiro número
    maior = menor = numeros[0];

    i = 1; // Reinicializa o contador para a segunda iteração
    // Loop para encontrar o maior e menor número
    do {
        if (numeros[i] > maior) {
            maior = numeros[i]; // Atualiza o maior número
        }
        if (numeros[i] < menor) {
            menor = numeros[i]; // Atualiza o menor número
        }

        i++;
    } while (i < 10);

    // Calcula a média
    media = soma / 10.0;

    // Exibe os resultados
    printf("\nO maior número digitado é: %d\n", maior);
    printf("O menor número digitado é: %d\n", menor);
    printf("A média dos números digitados é: %.2f\n", media);

    return 0; // Finaliza o programa
}