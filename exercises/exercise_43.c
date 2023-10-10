/**
 * Created by danieldantasdev on 06/09/23.
 * Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
 *
 * - O total a pagar com desconto de 10%;
 * - O valor de cada parcela, no parcelamento de 3x sem juros;
 * e à comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)
 * a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total)
*/
#include <stdio.h>

enum TipoPagamento {
    VISTA = 0,
    PARCELADO = 1,
    NENHUM = 2
};

int exercise_43() {
    float valor = 0, valorComDesconto = 0, parcela = 0, commissaoVendedor = 0;
    enum TipoPagamento tipoPagamento = VISTA;

    printf("%s", "Insira o valor total: ");
    scanf("%f", &valor);

    valorComDesconto = (valor - (valor / 10) * (10 / 10));
    printf("\nO total a pagar com 10 porcento de desconto é: %.2f", valorComDesconto);

    parcela = (valor / 3);
    printf("\n\n3 parcelas de: %.2f", parcela);

    if(tipoPagamento == VISTA){
        commissaoVendedor = (valorComDesconto / 10) * (5.0 / 10);
        printf("\n\nO tipo de pagamento escolhido foi A VISTA");
        printf("\n\nA comissão do vendedor é: %.2f", commissaoVendedor);
    } else if(tipoPagamento == PARCELADO) {
        commissaoVendedor = (valor / 10) * (5.0 / 10);
        printf("\n\nO tipo de pagamento escolhido foi PARCELADO");
        printf("\n\nA comissão do vendedor é: %.2f", commissaoVendedor);
    }

    return 0;
}