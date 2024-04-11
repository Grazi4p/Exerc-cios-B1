/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Solicita a entrada da temperatura em graus Celsius
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    // Calcula a temperatura em Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Exibe o resultado
    printf("A temperatura em Fahrenheit é: %.2f\n", fahrenheit);

    return 0;
}
