/* Considere o seguinte programa codificado em linguagem C: */
#include <stdio.h>

// --- function declaration ---
int leNumero(void);
int somaNumeros(int n1, int n2);

// --- main program ---
int main(void) {
    int n1, n2, resultado;
    n1 = leNumero();
    n2 = leNumero();
    resultado = somaNumeros(n1, n2);
    printf("result: %d", resultado);
    return 0;
}

// --- function implementation ---
int somaNumeros (int n1, int n2) {
    int sum;
    sum = n1 + n2;
    return sum;
}

int leNumero(void) {
    int num;
    do {
        printf("\n num: ");
        scanf("%d", &num);
    } while (num == 0);
    return num;
}