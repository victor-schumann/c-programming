#include <stdio.h>

int main()
{
    char nome[100];
    printf("Qual o seu nome?\n");
    scanf("%[^\n]%*c", &nome);

    printf("Olá, %s! Prazer em conhece-la!", nome);

    return 0;
}