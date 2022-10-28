#include <stdio.h>
#include <stdlib.h>

/*
Elabore um programa que solicite ao utilizador um número inteiro, e imprima no ecrã as
seguintes mensagens que melhor caracterizem o valor introduzido:
- "numero Nulo", "numero Positivo" ou "numero Negativo"
- "numero Par" ou "numero Impar"
*/

int main()
{
    int n;
    printf("\nIndique o valor a ser analisado: ");
    scanf("%i", &n);

    printf("\nCARACTERISTICAS:\n\n");
    if (n == 0){
        printf("\tSeu valor foi...%i! O qual corresponde a um numero NULO e PAR!\n", n);
        return 0;
    }
    else if (n > 0){
        printf("\tSeu valor foi...%i! O qual corresponde a um numero POSITIVO e", n);
    }
    else{
        printf("\tSeu valor foi...%i! O qual corresponde a um numero NEGATIVO e", n);
    }

    if (n % 2 == 1){
        printf(" a um numero IMPAR!\n");
    }
    else{
        printf(" a um numero PAR!\n");
    }


    return 0;
}
