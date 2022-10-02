#include <stdio.h>
#include <stdlib.h>

/* Elabore um programa que obtenha o valor das compras efetuadas pelo cliente de uma
loja, e que calcule o valor a pagar tendo em consideração a taxa de desconto indicada na
tabela disponível em https://ead.ipleiria.pt/2022-23/pluginfile.php/36217/mod_resource/content/8/P1EI_Ficha_02_EstruturasdeDecisa%CC%83o_1920.pdf */

#define DISCOUNT_1 0.04
#define DISCOUNT_2 0.06
#define DISCOUNT_3 0.08

#define SALE_1 500
#define SALE_2 1250
#define SALE_3 2000

int main()
{
    float totalCompras;

    printf("\nIndique o total de suas compras: ");
    scanf("%f", &totalCompras);

    if (totalCompras < 500)
    {
        printf("Infelizmente faltaram %.2f£ para você conseguir nosso primeiro desconto! De toda forma, seu total a pagar é %2.f£.\n", 500-totalCompras, totalCompras);
    } else if (totalCompras >= 500 && totalCompras < 1250)
    {
        printf("\nParabens! Visto que o seu total foi superior ou igual a %i£ e inferior a %i£, contemplamo-lhe com um desconto de %.2f\%%!!!\n\n", SALE_1, SALE_2, DISCOUNT_1*100);

        printf("Valor das compras:\t\t\t\t%.2f£\nValor descontado:\t\t\t\t%.2f£\nTotal a pagar:\t\t\t\t\t%.2f£\n\n", totalCompras, totalCompras*(DISCOUNT_1),totalCompras*(1-DISCOUNT_1));
    } else if (totalCompras >=1250 && totalCompras < 2000)
    {
        printf("\nParabens! Visto que o seu total foi superior ou igual a %i£ e inferior a %i£, contemplamo-lhe com um desconto de %.2f\%%!!!\n\n", SALE_2, SALE_3, DISCOUNT_2*100);

        printf("Valor das compras:\t\t\t\t%.2f£\nValor descontado:\t\t\t\t%.2f£\nTotal a pagar:\t\t\t\t\t%.2f£\n\n", totalCompras, totalCompras*(DISCOUNT_2),totalCompras*(1-DISCOUNT_2));
    } else
    {
        printf("\nParabens! Visto que o seu total foi superior ou igual a %i£, contemplamo-lhe com um desconto de %.2f\%%!!!\n\n", SALE_3, DISCOUNT_3*100);

        printf("Valor das compras:\t\t\t\t%.2f£\nValor descontado:\t\t\t\t%.2f£\nTotal a pagar:\t\t\t\t\t%.2f£\n\n", totalCompras, totalCompras*(DISCOUNT_3),totalCompras*(1-DISCOUNT_3));
    }

    return 0;
}
