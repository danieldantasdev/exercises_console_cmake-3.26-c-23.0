/**
 * Created by danieldantasdev on 06/09/23.
 * Faça um programa que leia o valor de um produto e imprima o valor com desconto,
 * tendo em vista que o desconto foi de 12%
*/
#include <stdio.h>

int exercise_37() {
    float value = 0;
    printf("%s", "Insira o valor do produto: ");
    scanf("%f", &value);

    float result = (value - (value / 10.0) * (12.00 / 10.0));

    printf("O valor com desconto de 12% é: %.2f", result);
    return 0;
}