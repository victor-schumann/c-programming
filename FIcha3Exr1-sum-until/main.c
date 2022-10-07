#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int sum=0;
    int i=0;
    char choice;

    printf("Diga-me um numero para com o qual fazer magias!\n");
    scanf(" %d", &num);

    if (num<0)
        {
            printf("Infelizmente nao posso utilizar este numero...\n");
        }

    printf("Escolhe o método para calcular a soma de todos os algarismos ate o num. escolhido:\n\t\ta) WHILE\n\t\tb) DO-WHILE\n\t\tc) FOR\nR = ");
    scanf(" %c", &choice);

    if (choice=='a')
    {
        while (i<=num)
            {
                sum=sum+i;
                i++;
            }
            printf("\t\t WHILE sum = %d", sum);   
        }

    
    else
    {
        if (choice=='b')
        {
            do
            {
                sum=sum+i;
                i++;
            }
            while (i<=num);
            printf("\t\t DO-WHILE sum = %d", sum);  
        }23
    }
    return 0;
}
