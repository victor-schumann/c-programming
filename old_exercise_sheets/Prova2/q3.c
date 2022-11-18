/* Considere o seguinte programa codificado em linguagem C: */
#include <stdio.h>
#define CONST 4
int f(int *a, int b); //aqui, o asterisco serve como indicador (pointer) no valor em questao que esta guardado na memoria;

int main(void) { 
    int x, y;
    x = 1;
    y = 2;
    f(&x, y); //responsável por guardar o valor na variavel, geralmente usado em conjunto com '*', o qual esta dentro da funcao;

    printf("main: x = %d y = %d", x, y);
    return 0;
}

int f(int *a, int b) {
    while (b<= CONST) {
        *a -= 2;
        b++;
    }
    printf("f() a = %d b = %d\n", *a, b);
    return b;
}

/* O resultado no monitor será o seguinte:
opcao 3)    f() a = -5 b = 5
            main: x = -5 y = 2
 */