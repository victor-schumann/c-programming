#include <stdio.h>

int main()
{
/*  bom para vlaidacao de dados de entrada
    
    do
    {
        instrução 1;
        instrução 2;
    } 
    while (condição);
    int num, sum, i; */
    int i, sum=0;
    int num;
    char choice;

    do
    {
        do
        {
            printf("come on, gimme positive numer, shall you: ");
            scanf("%d", &num);
        }
        while (num<=0);

        do
        {
            printf("%d\n", i);
            sum+=i;
            i++;
        }
        while (i<=num);
        printf("\nsum = %d\n", sum);
        
        printf("would you like to restart this program? (Y/n): ");
        scanf(" %c", &choice);
    }
    while (choice=='Y' || choice==' ');
    
    return 0;
}