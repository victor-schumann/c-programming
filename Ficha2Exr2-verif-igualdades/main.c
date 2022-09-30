#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;

    printf("\nIndique os valores a serem analisados e os separe por espacos simples: \n");
    scanf("%i %i %i", &n1, &n2, &n3);

    if (n1 == n2 && n2 == n3 && n1 == n3) {
        printf("\nEles foram %i, %i e %i, e, por acaso, sao todos iguais.\n", n1, n2, n3);
    } else if (n1 == n2 || n3 == n1 || n2 == n3) {
        printf("\nEles foram %i, %i e %i. e, por acaso, dois deles sao iguais.\n", n1, n2, n3);
    } else {
        printf("\nEles foram %i, %i e %i. e, por acaso, sao todos diferentes.", n1, n2, n3);
    }

    return 0;
}
