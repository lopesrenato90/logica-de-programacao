/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float medidaCentimetros, medidaMetros; // Variáveis para armazenar as medidas

    // Solicita ao usuário que digite a medida em centímetros
    printf("Digite a medida em centimetros: ");
    scanf("%f", &medidaCentimetros); // Lê a medida em centímetros

    // Converte a medida de centímetros para metros
    medidaMetros = medidaCentimetros / 100.0; // Divide por 100 para conversão

    // Exibe o resultado da conversão
    printf("%.2f centimetros equivalem a %.2f metros.\n", medidaCentimetros, medidaMetros);

    return 0; // Finaliza o programa
}