#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//function declaration
int binomioDiscriminante(int a, int b, int c);
int numDeZerosReais (int a, int b, int c);

// main program
int main()
{    
    int a=0, b=0, c=0, result = 0, resBinomio=0, squareDelta=0;
    printf("Let's calculate Δ!\n");

    do {
    printf("Value of 'a' (must be different from 0): \n");
    scanf("%d", &a);
    } while (a==0);
    printf("Value of 'b': \n");
    scanf("%d", &b);
    printf("Value of 'c': \n");
    scanf("%d", &c);

    resBinomio = binomioDiscriminante(a, b, c);
    squareDelta = sqrt(resBinomio);


    result = numDeZerosReais(a, b, c);
    switch (result) {
        case 0:
            printf("Raizes imaginarias)");
            break;
        case 1:
            printf("Tem uma raiz reais: %.2f: ", -b/2.0*a);
            break;
        case 2:
            printf("Tem duas raizes reais : ");
            printf("1a raiz: ", (-b-squareDelta)/2.0*a);
            printf("2a raiz: ", (-b+squareDelta)/2.0*a);
        break;
    }

    return 0;
}

// function implementation
int binomioDiscriminante(int a, int b, int c) {
    return b*b - 4*a*c;
}

int numDeZerosReais (int a, int b, int c) {
    int numDeRaizes;
    int calc;
    calc = binomioDiscriminante(a, b, c);

    if (calc > 0) {
        numDeRaizes == 2;
    } else {
        if (calc == 0) {
            numDeRaizes = 1;
        } else {
            numDeRaizes = 0;
        }
    }

    return numDeRaizes;
}