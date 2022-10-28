#include <stdio.h>

int main(void) {
    float nota;

    printf("Insita sua nota: ");
    scanf("%d", &nota);

    do {
        scanf("%d", &nota);
    } while (nota<0.0 || nota>20.0);
    
    return 0;

    /*o objetivo deste código é impedir que o usuário dê input de uma nota fora do intervalo I=[0, 20]*/
}