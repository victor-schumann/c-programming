#include <stdio.h>
#include <stdlib.h>

/*
Elabore um programa que solicite ao utilizador o comprimento de três linhas (valores
inteiros) e indique se poderão formar um triângulo. Caso tal seja possível o programa
deverá também indicar o tipo de triângulo: equilátero (todos os lados iguais), escaleno
(lados todos diferentes) ou isósceles (dois lados iguais).
Deverá ter em atenção que as três linhas formam um triângulo se |a - b| < c e c < a + b.
(para calcular o módulo poderá utilizar a função abs da biblioteca stdlib.h).
*/
int main()
{
    int a, b, c;

    printf("\nIndique os valores das linhas a serem analisadas e os separe por espacos simples: \n");
    scanf("%i %i %i", &a, &b, &c);

    if (abs(a, b) < c && c < a + b) {
        printf("Tens um triangulo do tipo \n");
    } else {
        printf("Infelizmente nao podes fazer um triangulo.\n")
    }

    if (a == b && b == c && c == a) {
        printf("equilatero!")
    }
    return 0;
}
