/* Considere o seguinte programa codificado em linguagem C: */
#include <stdio.h>

// --- function declaration ---
int funcaoCiclo(int *x, int i);

// --- main program ---
int main(void) { 
    int x, i;
    x = 2;

    i = funcaoCiclo(&x, i);
    return 0;
}

// --- function implementation ---

int funcaoCiclo(int *x, int i) {
    for (i=0; i<=*x; i++) {
        *x -=1;
        i++;
    }
    printf("main: i = %d x = %d", i, *x);

}

/* O resultado no monitor será o seguinte:
opcao 2)    main: i = 2 x = 1
 */