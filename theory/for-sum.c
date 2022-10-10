#include <stdio.h>

int main()
{
/*  for (INIT; IF; AFTER)
    {
        INSTRUCOES REPETIDAS;
    } */

    int sum, i;
    sum=0;
    for (i=0; i<=10; i++)
    {
        printf("%d\n", i);
        sum+=i;
    }
    printf("\nsum = %d", sum);

    return 0;
}