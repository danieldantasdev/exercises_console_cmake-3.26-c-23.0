/**
 * Created by danieldantasdev on 06/09/23.
 * Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.
*/
#include <stdio.h>

int exercise_30() {
    float value_real = 0, value_cotation = 0;
    printf("%s", "Insira o valor em real: ");
    scanf("%f", &value_real);
    printf("%s", "Insira o valor da cotação: ");
    scanf("%f", &value_cotation);
    float result = value_real / value_cotation;
    printf("O valor em dólar é: %.2f", result);
    return 0;
}