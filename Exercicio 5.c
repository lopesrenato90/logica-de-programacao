/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int num1, num2; // Variáveis para armazenar os dois números

    // Solicita ao usuário que digite o primeiro número
    printf("Digite o primeiro número: ");
    scanf("%d", &num1); // Lê o primeiro número

    // Solicita ao usuário que digite o segundo número
    printf("Digite o segundo número: ");
    scanf("%d", &num2); // Lê o segundo número

    // Verifica qual número é maior
    if (num1 > num2) {
        printf("%d é maior do que %d.\n", num1, num2); // num1 é maior
    } else if (num2 > num1) {
        printf("%d é maior do que %d.\n", num2, num1); // num2 é maior
    } else {
        printf("Os números são iguais.\n"); // Os números são iguais
    }

    return 0; // Finaliza o programa
}