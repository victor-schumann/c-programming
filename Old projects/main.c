#include <stdio.h>
#include <stdlib.h>

// Declaração das funções
int lerNumero(void);
void areaRetangulo (int comp, int larg);
int leDadosRetangulo (int *comprimento);
void leDadosRetangulo_v2 (int *comprimento, int *largura);

int main()
{
    int comprimento, largura;

    largura = leDadosRetangulo(&comprimento);
    areaRetangulo(comprimento, largura);

    leDadosRetangulo_v2(&comprimento, &largura);
    areaRetangulo(comprimento, largura);

    return 0;
}

// --------- IMPLEMENTAÇÃO das FUNÇÕES


void leDadosRetangulo_v2 (int *comprimento, int *largura)
{
    printf("\nComprimento do Retangulo");
    *comprimento = lerNumero();

    printf("\nLargura do Retangulo");
    *largura = lerNumero();
}


int leDadosRetangulo (int *comprimento)
{
    int largura;

    printf("\nComprimento do Retangulo");
    *comprimento = lerNumero();

    printf("\nLargura do Retangulo");
    largura = lerNumero();

    return largura;
}


void areaRetangulo (int comp, int larg)
{
    printf("\nAREA do RETANGULO = %d\n", comp*larg);
}



int lerNumero(void)
{
    int num;

    do
    {
        printf("\nValor: ");
        scanf("%d", &num);
        if (num <= 0)
        {
            printf("\nERRO: o valor tem de ser positivo\n");
        }
    }
    while (num <= 0);

    return num;
}

