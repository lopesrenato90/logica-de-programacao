/******************************************************************************

Escreva um programa em C que solicita 10 números ao usuário, através de um laço
while, e ao final mostre os dois maiores números digitados pelo usuário.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 0;      // Contador para o loop
    int num;       // Variável para armazenar o número digitado
    int maior1 = -2147483647; // Inicializa maior1 com o menor valor possível
    int maior2 = -2147483647; // Inicializa maior2 com o menor valor possível
    
    printf("Digite 10 números:\n");
    
    while (i < 10) {
        printf("Número %d: ", i + 1);
        scanf("%d", &num); // Lê o número digitado pelo usuário
        
        // Atualiza o maior1 e maior2 conforme necessário
        if (num > maior1) {
            maior2 = maior1; // Atualiza maior2
            maior1 = num;    // Atualiza maior1
        } else if (num > maior2 && num != maior1) {
            maior2 = num; // Atualiza maior2 se num for menor que maior1
        }
        
        i++; // Incrementa o contador
    }
    
    // Exibe os dois maiores números
    printf("Os dois maiores números digitados são: %d e %d\n", maior1, maior2);
    
    return 0; // Finaliza o programa
}