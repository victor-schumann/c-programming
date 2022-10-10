#include <stdio.h>
#include <ctype.h>

int main()
{
    int numero;
    int opcao;

    do
    {
        printf("\tMENU\n");
        printf("\t\ti) Incrementar.\n");
        printf("\t\td) Decrementar.\n");
        printf("\t\ts) Sair do programa.\n");
        printf("\n\n Opcao (I,D,S): ");

        scanf(" %c", &opcao);
        opcao = toupper(opcao);
        switch (opcao){
        case 'I': numero++;
            break;
        case 'D': numero--;
            break;
        case 'S': printf("Saida Prog");
            break;
        default: printf("Opcao Invalida");
}
    }
    while (opcao!='S');
    return 0;
}