/**
 * Created by danieldantasdev on 06/09/23.
 * Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin.
 * A fórmula de conversão é: K = C + 273.15.
*/
#include <stdio.h>

int exercise_9() {
    float x = 0;
    printf("%s", "Insira a temperatura em graus Celsius: ");
    scanf("%f", &x);
    float result = (x + 273.15);
    printf("A temperatura em Kelvin é: %.2f", result);
    return 0;
}