/**
 * Created by danieldantasdev on 06/09/23.
 * Leia uma velocidade em m/s e apresente-a convertida em Km/h.
 * A fórmula de conversão é: K = M * 3.6,
 * sendo K a velocidade em Km/h e M em m/s
*/
#include <stdio.h>

int exercise_11() {
    float x = 0;
    printf("%s", "Insira a velocidade em m/s: ");
    scanf("%f", &x);
    float result = x * 3.6;
    printf("A velocidade em Km/h: %.2f", result);
    return 0;
}