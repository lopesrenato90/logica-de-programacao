/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media; // Variáveis para armazenar as notas e a média

    // Solicita ao usuário que digite as três notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1); // Lê a primeira nota

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2); // Lê a segunda nota

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3); // Lê a terceira nota

    // Calcula a média das notas
    media = (nota1 + nota2 + nota3) / 3.0; // Soma as notas e divide por 3

    // Verifica se o aluno foi aprovado ou reprovado
    if (media >= 7.0) {
        printf("Aluno aprovado! Media = %.2f\n", media); // Aprovado
    } else {
        printf("Aluno reprovado! Media = %.2f\n", media); // Reprovado
    }

    return 0; // Finaliza o programa
}