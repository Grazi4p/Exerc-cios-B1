/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int a, b, c, maior;
    printf("Digite três valores: ");
    scanf("%d %d %d", &a, &b, &c);

    // Inicializando a variável 'maior' com o primeiro valor
    maior = a;

    // Verificando se b é maior que o valor atual de 'maior'
    if (b > maior)
        maior = b;

    // Verificando se c é maior que o valor atual de 'maior'
    if (c > maior)
        maior = c;

    printf("O maior valor é: %d\n", maior);
    return 0;
}
