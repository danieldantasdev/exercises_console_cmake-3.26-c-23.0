/**
 * Created by danieldantasdev on 06/09/23.
 * Leia uma temperatura em graus Fahrenheint e apresente-a convertida em graus Celsius.
 * A fórmula de conversão é: C = 5.0 * (F - 32.0) / 9.0.
*/
#include <stdio.h>

int exercise_7() {
    float x = 0;
    printf("%s", "Insira a temperatura em graus Farenheint: ");
    scanf("%f", &x);
    float result = (5.0 * (x - 32.0) / 9.0);
    printf("A temperatura em Celsius é: %.2f", result);
    return 0;
}