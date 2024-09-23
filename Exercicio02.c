/******************************************************************************

Desenvolva em C, um programa que leia 10 números inteiros e após isso apresente o
maior valor, o menor valor e a média.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[10]; // Array para armazenar os 10 números
    int i; // Contador
    int maior, menor; // Variáveis para armazenar o maior e menor valor
    float soma = 0, media; // Variáveis para soma e média

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]); // Lê o número digitado pelo usuário
        
        // Inicializa maior e menor com o primeiro número
        if (i == 0) {
            maior = numeros[i];
            menor = numeros[i];
        } else {
            // Atualiza maior se o número atual for maior
            if (numeros[i] > maior) {
                maior = numeros[i];
            }
            // Atualiza menor se o número atual for menor
            if (numeros[i] < menor) {
                menor = numeros[i];
            }
        }
        
        soma += numeros[i]; // Acumula a soma dos números
    }
    
    media = soma / 10.0; // Calcula a média
    
    // Exibe os resultados
    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média dos números: %.2f\n", media);
    
    return 0; // Finaliza o programa
}