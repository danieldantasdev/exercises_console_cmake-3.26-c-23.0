/**
 * Created by danieldantasdev on 06/09/23.
 * Leia uma distância em quilometros e apresente-a em milhas.
 * A fórmula de conversão é M = K / 1.61,
 * sendo K a velocidade em Km e M em milhas
*/
#include <stdio.h>

int exercise_13() {
    float x = 0;
    printf("%s", "Insira a distância em quilometros: ");
    scanf("%f", &x);
    float result = x / 1.61;
    printf("A distância em milhas é: %.2f", result);
    return 0;
}