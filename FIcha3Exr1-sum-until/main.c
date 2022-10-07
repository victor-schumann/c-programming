#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ra, rb, rc;
    int num;
    char choice;

    printf("Diga-me um numero para com o qual fazer magias!\n");
    scanf(" %d", &num);

    if (num<0)
    {
        printf("Infelizmente nao posso utilizar este numero...\n");
    }

    printf("Escolhe o método para calcular a soma de todos os algarismos ate o num. escolhido:\n\t\ta) WHILE\n\t\tb) DO-WHILE\n\t\tc) FOR\n\t\td) All at onceR = ");
    scanf(" %c", &choice);

    int i = 0;
    while (i<=num) {
        ra=ra+i;
        i++;
    }
    
    int j = 0;
    do {
        rb=rb+j;
        j++;
    }
    while (i<=num);
    
    int k = 0;
    for ( k==0; k<=num; k++) {
        rc=rc+k
    }

    switch (choice) {
        case 'a':
        case 'A':
            printf("\t\t WHILE sum = %d", ra);
            break;
        case 'b':
        case 'B':
            printf("\t\t DO-WHILE sum = %d", rb);
            break;
        case 'c':
        case 'C':
            printf("\t\t WHILE sum = %d", rc);
            break;
        case 'd':
        case 'D':
            printf("\t\t WHILE sum = %d\n\t\t DO-WHILE sum = %d\n\t\t FOR sum = %d", ra, rb, rc);
            break;
        default:
            printf("Sua escolha é inválida! Reinicie o programa para tentar de novo.");
    }

    return 0;
}
