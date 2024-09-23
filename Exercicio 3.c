/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float temperaturaCelsius, temperaturaFahrenheit; // Variáveis para armazenar as temperaturas

    // Solicita ao usuário que digite a temperatura em Celsius
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperaturaCelsius); // Lê a temperatura em Celsius

    // Converte a temperatura de Celsius para Fahrenheit
    temperaturaFahrenheit = (temperaturaCelsius * 9.0 / 5.0) + 32.0; // Usando 9.0 e 5.0 para garantir precisão

    // Exibe o resultado da conversão
    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", temperaturaCelsius, temperaturaFahrenheit);

    return 0; // Finaliza o programa
}