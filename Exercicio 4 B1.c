/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Digite os três lados do triângulo: ");
    scanf("%d %d %d", &a, &b, &c);

    // Verificando se os lados formam um triângulo
    if (a + b > c && a + c > b && b + c > a) {
        printf("Os lados formam um triângulo!\n");

        // Classificando o triângulo
        if (a == b && a == c)
            printf("Triângulo Equilátero\n");
        else if (a == b || a == c || b == c)
            printf("Triângulo Isósceles\n");
        else
            printf("Triângulo Escaleno\n");
    } else {
        printf("Os lados NÃO formam um triângulo!\n");
    }

    return 0;
}
