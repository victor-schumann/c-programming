#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Declaracaoo das funcoes
int lerNumero(void);
void areaRetangulo (int comp, int larg);
int leDadosRetangulo (int *comprimento);
void leDadosRetangulo_v2 (int *comprimento, int *largura);
char menu (int quantTriang, int quantQuad, int quantRet, int quantCirc);

int main() {
    int comprimento, largura;
    int quantCirc=0, quantQuad=0, quantRet=0, quantTriang=0;
    char opcao;

    do {
        opcao = menu(quantTriang, quantQuad, quantRet, quantCirc);
        switch (opcao) {
            case 'T':
                break;
            case 'R':
                largura = leDadosRetangulo(&comprimento);
                areaRetangulo(comprimento, largura);
                quantRet++;
                break;
            case 'C':
                break;
            case 'S':
                largura = leDadosRetangulo(&comprimento);
                areaRetangulo(comprimento, largura);
                quantRet++;
                break;
            case 'Q':
                break;
            default:
                printf("\n ERROR 404: INVALID OPTION, PLEASE TRY AGAIN!");
        }
    } while (opcao!='Q');

    /* largura = leDadosRetangulo(&comprimento);
    areaRetangulo(comprimento, largura);

    leDadosRetangulo_v2(&comprimento, &largura);
    areaRetangulo(comprimento, largura); */

    return 0;
}

// --------- IMPLEMENTACAO das FUNCOES
char menu (int quantTriang, int quantQuad, int quantRet, int quantCirc) {
    char opcao;

    printf("\n\n\t---------- AREA CALC ----------\n");
    printf("Triangle (Nr.): %d\t\tRectangle (Nr.): %d\n", quantTriang, quantRet);
    printf("Circle (Nr.): \t%d\t\tSquare (Nr.): \t %d\n", quantCirc, quantQuad);
    printf("\n (T)riangle");
    printf("\n (R)Rectangle");
    printf("\n (C)ircle");
    printf("\n (S)quare");
    printf("\n (Q)uit program");
    printf("\n OPTION: ");

    scanf(" %c", &opcao);       //passagem por referência, a qual altera a variável
    opcao = toupper(opcao);     //passagem por valor, a qual não altera a variável

    return opcao;
}

void leDadosRetangulo_v2 (int *comprimento, int *largura) {
    printf("\nComprimento do Retangulo");
    *comprimento = lerNumero();

    printf("\nLargura do Retangulo");
    *largura = lerNumero();
}

int leDadosRetangulo (int *comprimento) {
    int largura;

    printf("\nComprimento do Quadrilatero");
    *comprimento = lerNumero();

    printf("\nLargura do QuadrilAtero");
    largura = lerNumero();

    return largura;
}

void areaRetangulo (int comp, int larg) {
    printf("\nAREA DO QUADRILATERO = %d\n", comp*larg);
}

int lerNumero(void) {
    int num;

    do {
        printf("\nValor: ");
        scanf("%d", &num);
        if (num <= 0) {
            printf("\nERRO: o valor tem de ser positivo\n");
        }
    }
    while (num <= 0);

    return num;
}
