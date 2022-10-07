#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    char choice;
    int x;
    int y;
    int z;
    int w;

code:
    printf("\nIndique o primeiro numero com o qual queres trabalhar: \n");
    scanf("%i", &x);
    printf("\nIndique o operador com o qual queres trabalhar:\n\t\ta) +\n\t\tb) -\n\t\tc) * ou x\n\t\td) / ou :\n\t\te) %%\n");
    scanf(" %c", &op);
    printf("\nIndique o segundo numero com o qual queres trabalhar: \n");
    scanf("%i", &y);


    switch (op)
    {
    case 'a':
    case '+':
        printf("\t\t%i + %i = %i\n", x, y, z=x+y);
        break;
    case 'b':
    case '-':
        printf("\t\t%i - %i = %i\n", x, y, z=x-y);
        break;
    case 'c':
    case '*':
    case 'X':
    case 'x':
        printf("\t\t%i x %i = %i\n", x, y, z=x*y);
        break;
    case 'd':
    case '/':
    case ':':
        if (y == 0)
        {
            printf("Não existe divisão por zedo! Reinicie o programa para tentar de novo");
        }
        else
        {
            printf("\t\t%i - %i = %i\n\t\t Resto = %i\n", x, y, z=x/y, w=x%y);
        }
        break;
    case 'e':
    case '%':
        printf("\t\t%i %% %i = %i\n", x, y, z=x%y);
        break;
    default:
        printf("Seu char é inválido! Reinicie o programa para tentar de novo.");
    }
    printf("Gostarias de realizar uma nova operacao? (Y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y')
    {
        goto code;
    }
    else
    {
        if (choice == 'n' || choice == 'N')
        {
            printf("Ate a proxima!");
        }
    }

    return 0;
}
