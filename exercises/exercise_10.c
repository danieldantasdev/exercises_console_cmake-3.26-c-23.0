/**
 * Created by danieldantasdev on 06/09/23.
 * Leia uma velocidade em Km/h e apresente-a convertida em m/s.
 * A fórmula de conversão é: M = K / 3.6,
 * sendo K a velocidade em Km/h e M em m/s
*/
#include <stdio.h>

int exercise_10() {
    float x = 0;
    printf("%s", "Insira a velocidade em Km/h: ");
    scanf("%f", &x);
    float result = x / 3.6;
    printf("A velocidade em m/s: %.2f", result);
    return 0;
}