/**
 * Created by danieldantasdev on 06/09/23.
 * Leia uma distância em milhas e apresente-a em Km.
 * A fórmula de conversão é: K = 1,61 * M,
 * sendo K a velocidade em Km e M em milhas
*/
#include <stdio.h>

int exercise_12() {
    float x = 0;
    printf("%s", "Insira a distância em milhas: ");
    scanf("%f", &x);
    float result = 1.61 * x;
    printf("%.2f", result);
    return 0;
}