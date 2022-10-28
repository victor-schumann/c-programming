#include <stdio.h>

int main(void) {
    char character;
    do {
        printf("Insira sua resposta: ");
        scanf(" %c", &character);
    } while (character !='s' && character != 'S' && character != 'n' && character !='N');
    
    return 0;

    /*o objetivo deste código é impedir que o usuário dê input de um character diferente de S/s ou N/n*/
}