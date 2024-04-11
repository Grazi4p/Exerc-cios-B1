/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int a, b, c, menor, maior;
    printf("Digite três valores: ");
    scanf("%d %d %d", &a, &b, &c);

    // Encontrando o menor valor
    if (a < b) {
        if (a < c)
            menor = a;
        else
            menor = c;
    } else {
        if (b < c)
            menor = b;
        else
            menor = c;
    }

    // Encontrando o maior valor
    if (a > b) {
        if (a > c)
            maior = a;
        else
            maior = c;
    } else {
        if (b > c)
            maior = b;
        else
            maior = c;
    }

    printf("Primeira versão\tMenor: %d\tMaior: %d\n", menor, maior);
    return 0;
}


