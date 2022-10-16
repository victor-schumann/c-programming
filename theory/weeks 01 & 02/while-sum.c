#include <stdio.h>

int main()
{
    int sum=0;
    int i=1;
    int num;

    printf("please, píck a number: ");
    scanf("%d", &num);
    while (i<=num)
    {
        printf(" %d\n", i);
        sum+=i;
        i++;
    }
    printf("\nthe sum of numbers up to yours is:\n\t\t sum = %d", sum);

    return 0;
}