#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int ra = 0, rb = 0, rc = 0;
    int i = 1;
    int j = 0, k = 0;
    int countWhile = 0, countDoWhile = 0, countFor = 0;
    int num;
    char choice;

    printf("Diga-me um numero para com o qual fazer o calculo!\n");
    do {
        scanf(" %d", &num);
        if (num<0) {
        printf("Infelizmente nao posso utilizar este numero... Tente novamente, dessa vez com ou numero positivo.\n");
        }
    }
    while (num>=0);

    while (i<=num) {
        ra+=i;
        ++i;
    }

    do {
        rb+=j;
        ++j;
    } while (j<=num);

    for (rc=0; k<=num; ++k) {
        rc+=k;
    }

    do {
        printf(" Escolhe o método para calcular a soma de todos os algarismos ate o num. escolhido:\n\t\ta) WHILE\n\t\tb) DO-WHILE\n\t\tc) FOR\n\t\td) All at once\n\t\te) Sair\nR = ");

        scanf(" %c", &choice);
        choice = toupper(choice);

        switch (choice) {
        case 'A':
            printf("\t\t WHILE sum = %d\n", ra);
            countWhile+=1;
            break;
        case 'B':
            printf("\t\t DO-WHILE sum = %d\n", rb);
            countDoWhile+=1;
            break;
        case 'C':
            printf("\t\t FOR sum = %d\n", rc);
            countFor+=1;
            break;
        case 'D':
            printf("\n\t\t WHILE sum = %d\n\t\t DO-WHILE sum = %d\n\t\t FOR sum = %d\n", ra, rb, rc);
            countFor+=1,
            countDoWhile+=1;
            countWhile+=1;
            break;
        case 'E':
            printf("\n Thank you for stopping by! See ya!\n");
            break;
        default:
            printf(" Sua escolha é inválida! Reinicie o programa para tentar de novo.");
        }
    } while (choice !='E');

    printf(" Stats:\n\t\tWHILE option:\t\t%d times;\n\t\tDO-WHILE option:\t%d times\n\t\tFOR option:\t\t%d times\n", countWhile, countDoWhile, countFor);
    return 0;
}
