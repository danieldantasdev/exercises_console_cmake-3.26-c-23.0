/**
 * Created by danieldantasdev on 06/09/23.
 * Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius.
 * A fórmula de conversão é: C = K - 273.15.
*/
#include <stdio.h>

int exercise_8() {
    float x = 0;
    printf("%s", "Insira a temperatura em graus Kelvin: ");
    scanf("%f", &x);
    float result = (x - 273.15);
    printf("A temperatura em Celsius é: %.2f", result);
    return 0;
}