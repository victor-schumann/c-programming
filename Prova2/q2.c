/* Considere o seguinte programa codificado em linguagem C: */
#include <stdio.h> 
int f(int a, int b);

int main(void) { 
    int x, y;
    x = 1;
    y = 2;
    y = f(x, y);

    printf("main: x = %d y = %d", x, y);
    return 0;
}

int f(int a, int b) {
    if (a < 10) {
        a -= 3;
    } else { 
        a += 25; 
    }
    b= 10;
    printf("f() a = %d b = %d\n", a, b);
    return b;
}

/* O resultado no monitor será o seguinte:
opcao 3)    f() a = -2 b = 10
            main: x = 1 y = 10
 */