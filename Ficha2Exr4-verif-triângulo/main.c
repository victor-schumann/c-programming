#include <stdio.h>
#include <stdlib.h>

/*
Elabore um programa que solicite ao utilizador o comprimento de tr�s linhas (valores
inteiros) e indique se poder�o formar um tri�ngulo. Caso tal seja poss�vel o programa
dever� tamb�m indicar o tipo de tri�ngulo: equil�tero (todos os lados iguais), escaleno
(lados todos diferentes) ou is�sceles (dois lados iguais).
Dever� ter em aten��o que as tr�s linhas formam um tri�ngulo se |a - b| < c e c < a + b.
(para calcular o m�dulo poder� utilizar a fun��o abs da biblioteca stdlib.h).
*/
int main() {
    int a, b, c;

    printf("\nIndique os valores dos lados do triângulo a serem analisados e os separe por espacos ou tabulacoes simples: \n");
    scanf("%i %i %i", &a, &b, &c);

    if (abs(a - b) >= c || c >= a + b) {
        printf("Tens um triangulo do tipo:\n");
    } 
    
    else {
        if (abs(a - b) < c && c < a + b) {
            printf("Tens um triangulo do tipo:\n");
        }
    }

    if (a==b && b==c && c==a) {
        printf("\t[X] Equilatero.\n\t[ ] Isosceles\n\t[ ] Retangulo\n\t[ ] Escaleno\n");
    } 
    
    else {
        if (a==b || b==c || a ==c) {
            printf("\t[ ] Equilatero.\n\t[X] Isosceles\n\t[ ] Retangulo\n\t[ ] Escaleno\n");            
        } 
        else {
            if ((a*a)+(b*b)==c*c || (a*a)+(c*c)==b*b || (b*b)*(c*c)==a*a) {
                printf("\t[ ] Equilatero.\n\t[ ] Isosceles\n\t[X] Retangulo\n\t[ ] Escaleno\n");
            } else {
                printf("\t[ ] Equilatero.\n\t[ ] Isosceles\n\t[ ] Retangulo\n\t[X] Escaleno\n");
            }
        }
    }
    return 0;
}
