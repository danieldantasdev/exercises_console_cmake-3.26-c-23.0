/**
 * Created by danieldantasdev on 06/09/23.
 * Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheint.
 * A fórmula de conversão é: F = C * (9.0 / 5.0) + 32.0.
*/
#include <stdio.h>

int exercise_6() {
    float x = 0;
    printf("%s", "Insira a temperatura em graus Celsius: ");
    scanf("%f", &x);
    float result = (x * (9.0 / 5.0) + 32.0);
    printf("A temperatura em Farenheint é: %.2f", result);
    return 0;
}