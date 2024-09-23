/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numero; // Variável para armazenar o número digitado pelo usuário
    long quadrado; // Variável para armazenar o quadrado do número

    // Solicita ao usuário que digite um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero); // Lê o número inteiro

    // Calcula o quadrado do número
    quadrado = (long)numero * numero; // Garante que a multiplicação não cause overflow

    // Exibe o resultado
    printf("O quadrado de %d eh %ld\n", numero, quadrado);

    return 0; // Finaliza o programa
}