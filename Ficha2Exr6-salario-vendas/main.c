#include <stdio.h>
#include <stdlib.h>

#define SALARIO_BASE 600.00
#define ACRESCIMO 100.00
#define PERCENTAGEM 0.05

int main()
{
    int nCarros;
    float valorFaturado, extraPorCarro, extraPercentagem, total;

    printf("\nIndique o nmr. de carros vendidos: ");
    scanf("%d", &nCarros);

    printf("\nIndique o valor faturado: ");
    scanf("%f", &valorFaturado);

    printf("\nVENCIMENTO:\n\n");
    printf("\t\tVencimento Base:\t\t %.2f\n", SALARIO_BASE);

    extraPorCarro = ACRESCIMO * nCarros;
    printf("\t\tPor carro vendido:\t\t %.2f\n", extraPorCarro);

    extraPercentagem = PERCENTAGEM * valorFaturado;
    printf("\t\t%.0f\%% sobre vendas:\t\t %.2f\n", PERCENTAGEM*100, extraPercentagem);

    total = extraPercentagem + extraPorCarro + SALARIO_BASE;
    printf("\t\tTotal:\t\t\t\t %.2f\n", total);

    return 0;
}
